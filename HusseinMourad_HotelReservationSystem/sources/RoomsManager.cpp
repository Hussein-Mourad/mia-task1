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

    if (!reserved) throw "No rooms available.";
}

int RoomsManager::roomsAvailable(Guest &guest) {
    int availableRooms = 0;
    for (auto &it: rooms) {
        if (!it.second->isOccupied() && it.second->getType() == guest.getType()) {
            availableRooms++;
        }
    }
    return availableRooms;
}

void RoomsManager::extendReservation(Guest &guest, string roomId, int nights) {
    const int DAY_IN_SECONDS = 60 * 60 * 24;
    auto it = rooms.find(roomId);
    if (it == rooms.end()) {
        throw "Invalid room id";
    }

    const auto room = it->second;

    if (room->getGuest()->getId() != guest.getId()) {
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

void RoomsManager::cancelReservation(Guest &guest) {
    for (auto &it: rooms) {
        const auto room = it.second;
        if (room->isOccupied() && room->getGuest()->getId() == guest.getId()) {
            room->setGuest(nullptr);
            const time_t now = time(0);
            room->setLeaveDate(now);
        }
    }

    cout << "Reservation cancelled successfully." << endl;
}

void RoomsManager::orderServices(Guest &guest, string roomId, string service) {
    auto it = rooms.find(roomId);
    if (it == rooms.end()) {
        throw "Invalid room id";
    }

    const auto room = it->second;
    if (room->getGuest()->getId() != guest.getId()) {
        throw "Invalid room id";
    }


    for (auto &it: room->getServices()) {
        if (it->getName() == service) {
            auto orderedServices = room->getOrderedServices();
            orderedServices.push_back(new RoomService(it->getName(), it->getPrice()));
            room->setOrderedServices(orderedServices);
            cout << "Service ordered successfully." << endl;
            break;
        }
    }
    throw "Cannot find this service";


}

void RoomsManager::getInvoice(Guest &guest) {
    vector<Room *> guestRooms;
    float total = 0;

    cout << "---------------Invoice--------------" << endl;
    for (auto &it: rooms) {
        const auto room = it.second;
        if (room->isOccupied() && room->getGuest()->getId() == guest.getId()) {
            cout << "Room: " << room->getId() << "\tPrice: " << room->getPricePerNight() * room->getNights() << endl;
            total += room->getPricePerNight() * room->getNights();

            for (auto &it: room->getOrderedServices()) {
                cout << "Service: " << it->getName() << "\tPrice: " << it->getPrice() * room->getNights();
                total += it->getPrice() * room->getNights();
            }
        }
    }
    cout << "Total: " << total << endl;
    cout << "----------------------------" << endl;

}

Room *RoomsManager::addRoom(Room *room) {
    rooms[room->getId()] = room;
    return room;
}

Guest *RoomsManager::addGuest(Guest *guest) {
    guests[guest->getId()] = guest;
    cout << "Hi, " << guest->getName() << " your id is " << guest->getId() << endl;
    return guest;
}

const map<string, Room *> &RoomsManager::getRooms() const {
    return rooms;
}

const map<string, Guest *> &RoomsManager::getGuests() const {
    return guests;
}

Guest *RoomsManager::getGuest(string id) {
    auto it = guests.find(id);
    if (it == guests.end()) {
        throw "Invalid id";
    }
    return it->second;
}



