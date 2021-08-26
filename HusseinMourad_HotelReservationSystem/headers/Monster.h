//
// Created by hussein on 8/25/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_MONSTER_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_MONSTER_H

#include "stdafx.h"
#include "Guest.h"

class Monster : public Guest {
private:
    static int count;

public:
    Monster(const string &name) : Guest("M" + to_string(count), name, "human") {
        ++count;
    };
};

#endif// HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_MONSTER_H
