//
// Created by hussein on 8/25/21.
//

#include "../headers/Room.h"

Room::Room(const string &id, float pricePerNight, string type, const vector<RoomService *> &services)
        : id(id), pricePerNight(pricePerNight), type(type), services(services) {}

float Room::getPricePerNight() const {
    return pricePerNight;
}

void Room::setPricePerNight(float pricePerNight) {
    Room::pricePerNight = pricePerNight;
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

ostream &operator<<(ostream &os, const Room &room) {
    if (room.guest != nullptr) {
        os << "id: " << room.id << "\tpricePerNight: " << room.pricePerNight << "\tguest: " << room.guest
           << "\tnights: " << room.nights
           << "\tarrivalDate: "
           << ctime(&room.arrivalDate) << "\tleaveDate: " << ctime(&room.leaveDate);
    } else {
        os << "id: " << room.id << "\tpricePerNight: " << room.pricePerNight;
    }
    return os;
}

Guest *Room::getGuest() const {
    return guest;
}

void Room::setGuest(Guest *guest) {
    Room::guest = guest;
}

const string &Room::getType() const {
    return type;
}

const vector<RoomService *> &Room::getOrderedServices() const {
    return orderedServices;
}

void Room::setOrderedServices(const vector<RoomService *> &orderedServices) {
    Room::orderedServices = orderedServices;
}

void Room::setNights(int nights) {
    Room::nights = nights;
}

int Room::getNights() const {
    return nights;
}

