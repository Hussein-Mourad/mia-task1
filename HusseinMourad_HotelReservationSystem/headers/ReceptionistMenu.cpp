//
// Created by hussein on 8/26/21.
//

#include "ReceptionistMenu.h"

void ReceptionistMenu::showMenu(RoomsManager roomsManager, Receptionist receptionist) {
    cout << endl;
    string userInput;
    int choice;
    do {
        cout << "1. Show all Available rooms\n" << "2. Show all occupied rooms\n" << "3. Show All Guests\n"
             << "4. Show guest info\n" << "0. Back" << endl;
        switch (choice) {
            case 1: {
                receptionist.showAvailableRooms();
            }
                break;
            case 2: {
                receptionist.showOccupiedRooms();
            }
                break;
            case 3: {
                receptionist.showAllGuests();
            }
                break;
            case 4: {
                cout << "Enter user id: " << endl;
                cin >> userInput;
                receptionist.showGuestInfo(userInput);
            }
                break;
            default: {
                cout << "Invalid input" << endl;
            }
                break;
        }
    } while (choice != 0);

}

