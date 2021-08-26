//
// Created by hussein on 8/25/21.
//

#include "../headers/Guest.h"

string Guest::getId() const { return id; }

string Guest::getName() const { return name; }

ostream &operator<<(ostream &os, const Guest &guest) {
    os << "id: " << guest.id << "\tname: " << guest.name << "\ttype: " << guest.type;
    return os;
}

const string &Guest::getType() const {
    return type;
}


