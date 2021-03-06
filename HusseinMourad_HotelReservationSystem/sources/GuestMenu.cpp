//
// Created by hussein on 8/26/21.
//

#include "headers/GuestMenu.h"
#include "headers/stdafx.h"

void GuestMenu::showMenu(RoomsManager roomsManager, Guest &guest) {
    cout << endl;
    string choice;
    string userInput;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. New Reservation\n" << "2. Extend Reservation\n" << "3. Additional Services\n"
             << "4. Cancel Reservation\n" << "5. Get Invoice" << "\n0. Back" << endl;
        cin >> choice;
        switch (stoi("0" + choice)) {
            case 0:
                break;
            case 1: {
                string numberOfRooms;
                cout << "Enter the number of rooms you want?" << endl;
                cin >> numberOfRooms;
                const int availableRooms = roomsManager.roomsAvailable(guest);

                if (availableRooms >= stoi("0" + numberOfRooms)) {
                    cout << "Enter the number of nights you want to stay" << endl;
                    cin >> userInput;
                    for (int i = 0; i < stoi("0" + numberOfRooms); ++i) {
                        try {
                            roomsManager.reserveRoom(guest, stoi("0" + userInput));
                        } catch (const char *e) {
                            cout << e << endl;
                        }
                    }

                    if (stoi("0" + userInput) == 1) {
                        cout << "Room reserved successfully." << endl;
                    } else if (stoi("0" + userInput) > 1) {
                        cout << "Rooms reserved successfully." << endl;
                    } else {
                        exit(0);
                    }
                    roomsManager.getInvoice(guest);
                    break;
                } else {
                    if (availableRooms == 1) cout << "Sorry there is only one rooms available" << endl;
                    cout << "Sorry there are " << availableRooms << " rooms available" << endl;
                }

            }
                break;
            case 2: {
                string roomId;
                cout << "Enter the room id" << endl;
                cin >> roomId;
                cout << "Enter the number of extra nights" << endl;
                cin >> userInput;
                try {
                    roomsManager.extendReservation(guest, roomId, stoi("0" + userInput));
                } catch (const char *e) {
                    cout << e << endl;
                }
            }
                break;

            case 3: {
                string roomId;
                cout << "Enter room id" << endl;
                cin >> roomId;
                cout << "Choose a service:\n" << "1. Dry clean" << "\n2. Spa" << endl;
                cin >> userInput;

                if (stoi("0" + userInput) == 1) { // Adding string 0 ensures that stoi doesn't give error;
                    userInput = "Dry Clean";
                } else if (stoi("0" + userInput) == 2) {
                    userInput = "Spa";
                } else userInput = "none";

                try {
                    roomsManager.orderServices(guest, roomId, userInput);
                } catch (const char *e) {
                    cout << e << endl;
                }
            }
                break;
            case 4: {
                cout << "Choose an option:\n" << "1. Cancel all your reservation\t" << "2. Cancel a room" << endl;
                cin >> userInput;
                if (stoi("0" + userInput) == 1) {
                    try {
                        roomsManager.cancelAllReservations(guest);
                    } catch (const char *e) {
                        cout << e << endl;
                    }
                } else if (stoi("0" + userInput) == 2) {
                    string roomId;
                    cout << "Enter room id" << endl;
                    cin >> roomId;
                    try {
                        roomsManager.cancelReservation(guest, roomId);
                    } catch (const char *e) {
                        cout << e << endl;
                    }
                }
            }
                break;
            case 5: {
                roomsManager.getInvoice(guest);
            }
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    } while (stoi("0" + choice) != 0);
}

