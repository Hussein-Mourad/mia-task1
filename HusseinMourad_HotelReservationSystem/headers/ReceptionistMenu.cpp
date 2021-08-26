//
// Created by hussein on 8/26/21.
//

#include "ReceptionistMenu.h"

void ReceptionistMenu::showMenu(RoomsManager &roomsManager, Receptionist receptionist) {
    cout << endl;
    string userInput;
    string choice;
    do {
        cout << "1. Show all Available rooms\n" << "2. Show all occupied rooms\n" << "3. Show All Guests\n"
             << "4. Show guest info\n" << "0. Back" << endl;
        cin >> choice;
        switch (stoi("0" + choice)) {
            case 0:
                break;
            case 1: {
                receptionist.showAvailableRooms(roomsManager);
            }
                break;
            case 2: {
                receptionist.showOccupiedRooms(roomsManager);
            }
                break;
            case 3: {
                receptionist.showAllGuests(roomsManager);
            }
                break;
            case 4: {
                cout << "Enter user id: " << endl;
                cin >> userInput;
                receptionist.showGuestInfo(roomsManager, userInput);
            }
                break;
            default: {
                cout << "Invalid input" << endl;
            }
                break;
        }
    } while (stoi("0" + choice) != 0);

}

