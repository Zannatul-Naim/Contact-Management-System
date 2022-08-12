#include"addressBooks.hpp"
#include"search.hpp"
#pragma once

void modifyContacts(AddressBooks *abooks) {
    system("cls");
    cout << "           Enter Phone number to modify : ";
    string phone;
    cin >> phone;
    char ch;
    int index = search(phone, abooks);
    if(index != -1) {
        cout << "           Do you want to Change Phone (y\\n) : ";
        cin >> ch;
        if(ch == 'y') {
            string name;
            cout <<"            Enter Name : ";
            cin >> name;
            abooks->contactsArray[index].name = name;
        }

        cout << "           Do you want to Change Phone (y\\n) : ";
        cin >> ch;
        if(ch == 'y') {
        string phone;
        cout <<"            Enter Phone : ";
        cin >> phone;
        abooks->contactsArray[index].phone = phone;
        }

        cout << "           Do you want to Change Address (y\\n) : ";
        cin >> ch;
        if(ch == 'y') {
            string address;
            cout <<"            Enter address : ";
            cin >> address;
            abooks->contactsArray[index].address = address;
        }
    }
    else {
        system("cls");
        cout << "           You Searched for : " << phone <<endl << endl;
        cout << "\n\n           Contacts Not Found!             \n\n";
    }
}