//
// Created by hussein on 8/26/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_MONSTERROOM_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_MONSTERROOM_H

#include "Room.h"
#include "RoomService.h"

class MonsterRoom : public Room {
private:
    static int count;
    const vector<RoomService *> services{
            new RoomService("Dry Clean", 30),
            new RoomService("Spa", 50)
    };

public:
    MonsterRoom() : Room("MR" + to_string(count), 200, "monster", services) {
        ++count;
    };

    const vector<RoomService *> &getServices() override;
};


#endif //HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_MONSTERROOM_H
