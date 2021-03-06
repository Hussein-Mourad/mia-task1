//
// Created by hussein on 8/26/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_HUMANROOM_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_HUMANROOM_H

#include "Room.h"

class HumanRoom : public Room {
private:
    static int count;
    const vector<RoomService *> services{
            new RoomService("Dry Clean", 70),
            new RoomService("Spa", 100)
    };

public:
    HumanRoom() : Room("HR" + to_string(count), 500, "human", services) { ++count; };

    const vector<RoomService *> &getServices() override;
};


#endif //HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_HUMANROOM_H
