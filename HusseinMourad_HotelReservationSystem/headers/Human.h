//
// Created by hussein on 8/25/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_HUMAN_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_HUMAN_H

#include "Guest.h"
#include "stdafx.h"

class Human : public Guest {
private:
    static int count;
public:
    Human(const string &name) : Guest("H" + to_string(count++), name, "human") {};
};

#endif// HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_HUMAN_H
