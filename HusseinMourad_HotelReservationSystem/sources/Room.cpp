//
// Created by hussein on 8/25/21.
//

#include "../headers/Room.h"

Room::Room(const string &id, float pricePerNight, const vector<RoomService> &services)
        : id(id), pricePerNight(pricePerNight), services(services) {}

float Room::getPricePerNight() const {
    return pricePerNight;
}

void Room::setPricePerNight(float pricePerNight) {
    Room::pricePerNight = pricePerNight;
}

Guest *Room::getGuest() const {
    return guest;
}

void Room::setGuest(Guest *guest) {
    Room::guest = guest;
}

const time_t &Room::getArrivalDate() const {
    return arrivalDate;
}

void Room::setArrivalDate(const time_t &arrivalDate) {
    Room::arrivalDate = arrivalDate;
}

const time_t &Room::getLeaveDate() const {
    return leaveDate;
}

void Room::setLeaveDate(const time_t &leaveDate) {
    Room::leaveDate = leaveDate;
}

const string &Room::getId() const {
    return id;
}

bool Room::isOccupied() {
    return guest != nullptr;
}

const vector<RoomService *> &Room::getServices() const {
    return services;
}
