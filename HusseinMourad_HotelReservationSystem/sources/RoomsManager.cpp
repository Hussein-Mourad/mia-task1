//
// Created by hussein on 8/26/21.
//

#include "headers/RoomsManager.h"
#include <ctime>

void RoomsManager::reserveRoom(Guest &guest, int nights) {
    const int DAY_IN_SECONDS = 60 * 60 * 24;
    bool reserved = false;

    for (auto &it: rooms) {
        const auto room = it.second;
        if (!room->isOccupied() && room->getType() == guest.getType()) {
            const time_t now = time(0);
            time_t leave = now + (DAY_IN_SECONDS * nights);
            room->setGuest(&guest);
            room->setArrivalDate(now);
            room->setLeaveDate(leave);
            room->setNights(nights);
            reserved = true;
            break;
        }
    }

    if (reserved) {
        cout << "Room reserved successfully." << endl;
    } else throw "No rooms available.";
}

bool RoomsManager::isRoomsAvailable(Guest &guest, int count) {
    int availableRooms = 0;
    for (auto &it: rooms) {
        if (!it.second->isOccupied() && it.second->getType() == guest.getType()) {
            availableRooms++;
        }
    }
    return availableRooms == count;
}

void RoomsManager::extendReservation(Guest &guest, string roomId, int nights) {
    const int DAY_IN_SECONDS = 60 * 60 * 24;
    auto it = rooms.find(roomId);
    if (it == rooms.end()) {
        throw "Invalid room id";
    }

    const auto room = it->second;

    if (room->getGuest()->getType() != guest.getId()) {
        throw "Invalid room id";
    }

    int oldNights = room->getNights();
    time_t leaveDate = room->getLeaveDate();
    time_t newLeaveDate = leaveDate + (DAY_IN_SECONDS * nights);

    room->setLeaveDate(newLeaveDate);
    room->setNights(oldNights + nights);


    cout << "Reservation extended successfully." << endl;
}

void RoomsManager::cancelReservation(Guest &guest, string roomId) {
    auto it = rooms.find(roomId);
    if (it == rooms.end()) {
        throw "Invalid room id";
    }

    const auto room = it->second;
    if (room->getGuest()->getId() != guest.getId()) {
        throw "Invalid room id";
    }

    room->setGuest(nullptr);
    const time_t now = time(0);
    room->setLeaveDate(now);

    cout << "Reservation cancelled successfully." << endl;
}

void RoomsManager::orderServices(Guest &guest, string roomId, RoomService &service) {
    auto it = rooms.find(roomId);
    if (it == rooms.end()) {
        throw "Invalid room id";
    }

    const auto room = it->second;
    if (room->getGuest()->getId() != guest.getId()) {
        throw "Invalid room id";
    }

    auto orderedServices = room->getOrderedServices();
    orderedServices.push_back(&service);
    room->setOrderedServices(orderedServices);

    cout << "Service ordered successfully." << endl;
}

void RoomsManager::getInvoice(Guest &guest) {
    vector<Room *> guestRooms;
    float total = 0;

    for (auto &it: rooms) {
        const auto room = it.second;
        if (room->getGuest()->getId() == guest.getId()) {
            cout << "Room: " << room->getId() << "\tPrice: " << room->getPricePerNight() << endl;
            total += room->getPricePerNight();

            for (auto &it: room->getOrderedServices()) {
                cout << "Service: " << it->getName() << "\tPrice: " << it->getPrice();
                total += it->getPrice();
            }
        }
    }
    cout << "Total: " << total << endl;

}

