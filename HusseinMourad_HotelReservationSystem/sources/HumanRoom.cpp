//
// Created by hussein on 8/26/21.
//

#include "headers/HumanRoom.h"

int HumanRoom::count = 1;

const vector<RoomService *> &HumanRoom::getServices() {
    return services;
}
