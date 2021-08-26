//
// Created by hussein on 8/26/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_RECEPTIONIST_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_RECEPTIONIST_H


#include "RoomsManager.h"

class Receptionist {
private:
    static int count;
    string id;
    RoomsManager roomsManager;
public:
    Receptionist();

    const string &getId() const;

    void showAvailableRooms(RoomsManager roomsManager);

    void showOccupiedRooms(RoomsManager roomsManager);

    void showAllGuests(RoomsManager roomsManager);

    void showGuestInfo(RoomsManager roomsManager, string &id);


};


#endif //HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_RECEPTIONIST_H
