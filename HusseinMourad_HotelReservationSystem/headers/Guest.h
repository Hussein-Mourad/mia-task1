//
// Created by hussein on 8/25/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_GUEST_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_GUEST_H

#include <ostream>
#include "RoomService.h"

class Guest {
private:
    string id;
    string name;
    vector<string> reservedRooms;

public:
    Guest(string id, string name) : id(id), name(name) {};

    string getId() const;

    string getName() const;

    friend ostream &operator<<(ostream &os, const Guest &guest);

    virtual ~Guest() = 0;
};

#endif// HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_GUEST_H
