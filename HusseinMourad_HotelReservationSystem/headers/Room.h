//
// Created by hussein on 8/25/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOM_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOM_H

#include <ctime>
#include "RoomService.h"
#include "Guest.h"
#include "stdafx.h"

class Room {
private:
    string id;
    float pricePerNight;
    vector<RoomService *> services;
    Guest *guest = nullptr;
    time_t arrivalDate;
    time_t leaveDate;

public:
    Room(const string &id, float pricePerNight,
         const vector<RoomService *> &services);

    const string &getId() const;

    const vector<RoomService *> &getServices() const;

    float getPricePerNight() const;

    void setPricePerNight(float pricePerNight);

    Guest *getGuest() const;

    void setGuest(Guest *guest);

    const time_t &getArrivalDate() const;

    void setArrivalDate(const time_t &arrivalDate);

    const time_t &getLeaveDate() const;

    void setLeaveDate(const time_t &leaveDate);

    bool isOccupied();
};

#endif // HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOM_H
