//
// Created by hussein on 8/25/21.
//

#include "../headers/Guest.h"

string Guest::getId() const { return id; }

string Guest::getName() const { return name; }

ostream &operator<<(ostream &os, const Guest &guest) {
    os << "id: " << guest.id << " name: " << guest.name << endl;
    return os;
}

