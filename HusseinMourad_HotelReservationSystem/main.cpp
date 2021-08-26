#include "headers/stdafx.h"
#include <headers/MonsterRoom.h>
#include "headers/Guest.h"
#include "headers/Human.h"
#include "headers/Monster.h"
#include "headers/HumanRoom.h"
#include "headers/RoomsManager.h"


string toLowerCase(string str);

int main() {
    RoomsManager roomsManager;
    Guest *guest = nullptr;
    string respond;
    string username;
    int menuChoice;


    for (int i = 0; i < 20; ++i) {
        if (i < 5) {
            roomsManager.addRoom(new HumanRoom());
        } else {
            roomsManager.addRoom(new MonsterRoom());
        }
    }

    cout << "Welcome to the hotel" << endl;
    do {
        cout << "1. Create a new Account" << endl << "2. Login" << endl;
        cin >> menuChoice;
        switch (menuChoice) {
            case 1:
                cout << "Please enter you name?" << endl;
                cin >> username;
                do {
                    cout << "Are you a human or a monster?" << endl;
                    cin >> respond;
                    if (toLowerCase(respond) == "monster") {
                        guest = roomsManager.addGuest(new Monster(username));
                        break;
                    } else if (toLowerCase(respond) == "human") {
                        guest = roomsManager.addGuest(new Human(username));
                        break;
                    } else cout << "Invalid input" << endl;
                } while (true);
                break;
            case 2:
                string id;
                cout << "Enter your id:" << endl;
                cin >> id;
                id[0] = toupper(id[0]);
                try {
                    guest = roomsManager.getGuest(id);
                    cout << *guest << endl;
                } catch (const string &e) {
                    cout << e << endl;
                }
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }


        do {
            cout << "Is it you first time here?" << "" << endl;
            cin >> respond;
            if (respond == "exit") exit(0);
            else if (respond != "y" && respond != "n") cout << "Invalid input" << endl;
            else break;
        } while (true);

        if (respond == "y") {
            cout << "Please enter you name?" << endl;
            cin >> username;

            do {
                cout << "Are you a human or a monster?" << endl;
                cin >> respond;
                if (toLowerCase(respond) == "monster") {
                    guest = roomsManager.addGuest(new Monster(username));
                    break;
                } else if (toLowerCase(respond) == "human") {
                    guest = roomsManager.addGuest(new Human(username));
                    break;
                } else cout << "Invalid input" << endl;
            } while (true);


        } else if (respond == "n") {

        }


    } while (menuChoice != 0);
    return 0;
}

string toLowerCase(string str) {
    string tmp = str;
    for (int i = 0; i < str.length(); ++i) {
        tmp[i] = (char) tolower(str[i]);
    }
    return tmp;
}