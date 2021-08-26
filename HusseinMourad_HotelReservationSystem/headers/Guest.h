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
    string type;

public:
    Guest(string id, string name, string type) : id(id), name(name), type(type) {};

    string getId() const;

    string getName() const;

    const string &getType() const;

    friend ostream &operator<<(ostream &os, const Guest &guest);
};

#endif// HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_GUEST_H
