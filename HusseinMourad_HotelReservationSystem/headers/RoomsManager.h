//
// Created by hussein on 8/26/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOMSMANAGER_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOMSMANAGER_H

#include "stdafx.h"
#include "Room.h"
#include "Guest.h"

class RoomsManager {
private:
    map<string, Room *> rooms;
    map<string, Guest *> guests;

public:
    bool isRoomsAvailable(Guest &guest, int count);

    void reserveRoom(Guest &guest, int nights);

    void extendReservation(Guest &guest, string roomId, int nights);

    void cancelReservation(Guest &guest, string roomId);

    void orderServices(Guest &guest, string roomId, RoomService &service);

    void getInvoice(Guest &guest);
};


#endif //HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOMSMANAGER_H
