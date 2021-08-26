//
// Created by hussein on 8/25/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOMSERVICE_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOMSERVICE_H

#include "stdafx.h"

class RoomService {
private:
    string name;
    float price;

public:
    RoomService(const string &name, float price);

    const string getName() const;

    void setName(const string &name);

    float getPrice() const;

    void setPrice(float price);
};

#endif // HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOMSERVICE_H
