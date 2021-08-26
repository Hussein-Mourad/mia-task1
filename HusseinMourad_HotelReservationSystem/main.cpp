#include <headers/MonsterRoom.h>
#include "headers/stdafx.h"
#include "headers/Guest.h"
#include "headers/Human.h"
#include "headers/Monster.h"
#include "headers/HumanRoom.h"


string toLowerCase(string str);

int main() {
    string respond;
    string username;
    vector<Guest *> guests;
    cout << "Welcome to the hotel" << endl;
    const time_t now = time(0);

    time_t epoch = now;
    epoch += (60 * 60 * 24 * 4);
    cout << ctime(&epoch) << endl;
//    Room *room = new HumanRoom();
//    room->setArrivalDate(now);
//    cout << *room << endl;

//    while (true) {
//        do {
//            cout << "Is it you first time here? (y/n)" << endl;
//            cin >> respond;
//            if (respond != "y" && respond != "n") cout << "Invalid input" << endl;
//            else break;
//        } while (true);
//
//        if (respond == "y") {
//            cout << "Please enter you name?" << endl;
//            cin >> username;
//
//
//            do {
//                cout << "Are you a human or a monster?" << endl;
//                cin >> respond;
//                if (toLowerCase(respond) == "monster") {
//                    guests.push_back(new Monster(username));
//                    break;
//                } else if (toLowerCase(respond) == "human") {
//                    guests.push_back(new Human(username));
//                    break;
//                } else cout << "Invalid input" << endl;
//            } while (true);
//
//            cout << *guests.back() << endl;
//
//
//        } else if (respond == "n") {
//            string id;
//            cout << "Enter your id:" << endl;
//            cin >> id;
//            id[0] = toupper(id[0]);
//            bool found = false;
//            for (auto &guest: guests) {
//                if (guest->getId() == id) {
//                    found = true;
//                    cout << *guest << endl;
//                }
//                if (!found) {
//                    cout << "Guest not found!" << endl;
//                }
//            }
//        }
//    }
}

string toLowerCase(string str) {
    string tmp = str;
    for (int i = 0; i < str.length(); ++i) {
        tmp[i] = (char) tolower(str[i]);
    }
    return tmp;
}