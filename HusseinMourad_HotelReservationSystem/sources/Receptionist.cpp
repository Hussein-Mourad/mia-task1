//
// Created by hussein on 8/26/21.
//

#include "headers/Receptionist.h"

int Receptionist::count = 1;

Receptionist::Receptionist() : id("R" + to_string(count++)) {};

void Receptionist::showAvailableRooms(RoomsManager roomsManager) {
    bool found = false;
    for (auto &it: roomsManager.getRooms()) {
        const auto room = it.second;
        if (!room->isOccupied()) {
            found = true;
            cout << *room << endl;
        }
    }
    if (!found) cout << "All rooms are occupied" << endl;
}

void Receptionist::showOccupiedRooms(RoomsManager roomsManager) {
    bool found = false;
    for (auto &it: roomsManager.getRooms()) {
        const auto room = it.second;
        if (room->isOccupied()) {
            found = true;
            cout << *room << endl;
        }
    }
    if (!found) cout << "All rooms are available" << endl;
}

void Receptionist::showAllGuests(RoomsManager roomsManager) {
    if (roomsManager.getGuests().empty()) {
        cout << "No guests to show." << endl;
        return;
    }
    for (auto &it: roomsManager.getGuests()) {
        cout << *it.second << endl;
    }
}

void Receptionist::showGuestInfo(RoomsManager roomsManager, string &id) {
    bool found = false;
    if (roomsManager.getGuests().empty()) {
        cout << "There are no guests available." << endl;
        return;
    }
    const auto it = roomsManager.getGuests().find(id);
    if (it == roomsManager.getGuests().end()) {
        cout << "Guest not found" << endl;
        return;
    }
    const auto guest = it->second;
    cout << "Guest info: " << *guest << endl;
    cout << "Guest rooms: " << endl;

    for (auto &it: roomsManager.getRooms()) {
        const auto room = it.second;
        if (room->isOccupied() && room->getGuest()->getId() == id) {
            found = true;
            cout << *room << endl;
        }
    }
    if (!found) {
        cout << "No rooms reserved" << endl;
    } else {
        roomsManager.getInvoice(*guest);
    }
}

const string &Receptionist::getId() const {
    return id;
}
