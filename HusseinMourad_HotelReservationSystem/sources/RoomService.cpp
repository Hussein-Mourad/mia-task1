//
// Created by hussein on 8/25/21.
//

#include "../headers/RoomService.h"

RoomService::RoomService(const string &name, float price)
        : name(name), price(price) {}

const string RoomService::getName() const { return name; }

void RoomService::setName(const string &name) { RoomService::name = name; }

float RoomService::getPrice() const { return price; }

void RoomService::setPrice(float price) { RoomService::price = price; }
