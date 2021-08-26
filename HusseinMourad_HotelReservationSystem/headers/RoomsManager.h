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
    RoomsManager() {};

    Room *addRoom(Room *room);

    Guest *addGuest(Guest *guest);

    Guest *getGuest(string id);


    const map<string, Room *> &getRooms() const;

    const map<string, Guest *> &getGuests() const;

    int roomsAvailable(Guest &guest);

    void reserveRoom(Guest &guest, int nights);

    void extendReservation(Guest &guest, string roomId, int nights);

    void cancelAllReservations(Guest &guest);

    void cancelReservation(Guest &guest, string roomId);

    void orderServices(Guest &guest, string roomId, string service);

    void getInvoice(Guest &guest);
};


#endif //HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_ROOMSMANAGER_H
