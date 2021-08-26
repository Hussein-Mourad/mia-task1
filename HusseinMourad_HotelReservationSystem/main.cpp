#include "headers/stdafx.h"
#include "headers/Guest.h";
#include "headers/Human.h"
#include "headers/Monster.h"


string toLowerCase(string str);

int main() {
    string respond;
    string username;
    vector<Guest *> guests;
    cout << "Welcome to the hotel" << endl;
    cout << "Is it you first time here? (y/n)" << endl;
    cin >> respond;
    if (respond == "y") {
        cout << "Please enter you name?" << endl;
        cin >> username;
        cout << "Are you a human or a monster?" << endl;
        cin >> respond;

        if (toLowerCase(respond) == "monster") guests.push_back(new Monster(username));
        else guests.push_back(new Human(username));
    } else if (respond == "n") {
        cout << "Enter your id:" << endl;
        cin >> respond;
        
    }


    Guest *guest = new Human("Hussein");
    cout << guest->getId() + "\t" + guest->getName() << endl;
    guest = new Monster("Ahmed");
    cout << guest->getId() + "\t" + guest->getName() << endl;
    return 0;
}

string toLowerCase(string str) {
    string tmp = str;
    for (int i = 0; i < str.length(); ++i) {
        tmp[i] = tolower(str[i]);
    }
    return tmp;
}