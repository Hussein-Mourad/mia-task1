//
// Created by hussein on 8/25/21.
//

#include "../headers/stdafx.h"

Guest::Guest(const string &id, const string &name) : id(id), name(name) {}

string Guest::getId() const { return id; }

string Guest::getName() const { return name; }

string Guest::setName(string name) { this->name = name; }
