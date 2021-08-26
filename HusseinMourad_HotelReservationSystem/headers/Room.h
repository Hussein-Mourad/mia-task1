//
// Created by hussein on 8/25/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOM_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOM_H

#include <ctime>
#include <ostream>
#include "RoomService.h"
#include "Guest.h"
#include "stdafx.h"

class Room {
private:
    string id;
    float pricePerNight;
    vector<RoomService *> services;
    vector<RoomService *> orderedServices;
    Guest *guest = nullptr;
    time_t arrivalDate;
    time_t leaveDate;
    int nights;
    string type;

public:
    Room(const string &id, float pricePerNight, string type,
         const vector<RoomService *> &services);

    const string &getId() const;

    virtual const vector<RoomService *> &getServices() = 0;

    float getPricePerNight() const;

    void setPricePerNight(float pricePerNight);

    Guest *getGuest() const;

    void setGuest(Guest *guest);

    const time_t &getArrivalDate() const;

    void setArrivalDate(const time_t &arrivalDate);

    const time_t &getLeaveDate() const;

    void setLeaveDate(const time_t &leaveDate);

    const string &getType() const;

    bool isOccupied();

    const vector<RoomService *> &getOrderedServices() const;

    void setOrderedServices(const vector<RoomService *> &orderedServices);

    int getNights() const;

    void setNights(int nights);

    friend ostream &operator<<(ostream &os, const Room &room);
};

#endif // HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOM_H
