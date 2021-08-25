//
// Created by hussein on 8/25/21.
//

#ifndef HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_GUEST_H
#define HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_GUEST_H

#include "RoomService.h"
#include "stdafx.h"

class Guest {
private:
  string id;
  string name;
  vector<string> reservedRooms;

public:
  Guest(const string &id, const string &name);

  string getName() const;

  string setName(string name);

  string getId() const;

  virtual void reserveRoom(string id) const;

  virtual void extendReservation(string id) const;

  virtual void cancelReservation(string id) const;

  virtual void orderService(RoomService service) const;
};

#endif // HUSSEINMOURAD_HOTELRESERVATIONSYSTEM_GUEST_H
