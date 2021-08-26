#include "headers/stdafx.h"
#include <headers/MonsterRoom.h>
#include <headers/Receptionist.h>
#include <headers/ReceptionistMenu.h>
#include "headers/Guest.h"
#include "headers/Human.h"
#include "headers/Monster.h"
#include "headers/HumanRoom.h"
#include "headers/RoomsManager.h"
#include "headers/GuestMenu.h"


string toLowerCase(string str);

int main() {
    RoomsManager roomsManager;
    Guest *guest = nullptr;
    string userInput;
    string username;
    int menuChoice;
    Receptionist *receptionist = new Receptionist(roomsManager);

   
    for (int i = 0; i < 20; ++i) {
        if (i < 5) {
            roomsManager.addRoom(new HumanRoom());
        } else {
            roomsManager.addRoom(new MonsterRoom());
        }
    }

    cout << "Welcome to the hotel" << endl;
    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Create a new Account\n" << "2. Login\n" << "3. Login as Receptionist\n" << "0. Exit" << endl;
        cin >> menuChoice;
        switch (menuChoice) {
            case 0:
                exit(0);
            case 1: {
                cout << "Please enter you name?" << endl;
                cin >> username;
                do {
                    cout << "Are you a human or a monster?" << endl;
                    cin >> userInput;
                    if (toLowerCase(userInput) == "monster") {
                        guest = roomsManager.addGuest(new Monster(username));
                        GuestMenu::showMenu(roomsManager, *guest);
                        break;
                    } else if (toLowerCase(userInput) == "human") {
                        guest = roomsManager.addGuest(new Human(username));
                        GuestMenu::showMenu(roomsManager, *guest);
                        break;
                    } else cout << "Invalid input" << endl;
                } while (true);
            }
                break;
            case 2: {
                string id;
                cout << "Enter your id:" << endl;
                cin >> id;
                id[0] = toupper(id[0]);
                try {
                    guest = roomsManager.getGuest(id);
                    cout << *guest << endl;
                    GuestMenu::showMenu(roomsManager, *guest);
                } catch (const char *e) {
                    cout << e << endl;
                }
            }
            case 3: {
                string id;
                cout << "Enter your id: " << endl;
                cin >> id;
                id[0] = toupper(id[0]);
                if (receptionist->getId() == id) {
                    goto receptionist;
                } else {
                    cout << "Invalid id" << endl;
                }
            }
                break;
            case -1:
            receptionist:
            {
                ReceptionistMenu::showMenu(roomsManager, *receptionist);
            }
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }

    };
}

string toLowerCase(string str) {
    string tmp = str;
    for (int i = 0; i < str.length(); ++i) {
        tmp[i] = (char) tolower(str[i]);
    }
    return tmp;
}