//
// Created by hussein on 8/26/21.
//

#include "headers/MonsterRoom.h"

int MonsterRoom::count = 1;

const vector<RoomService *> &MonsterRoom::getServices() {
    return services;
}


