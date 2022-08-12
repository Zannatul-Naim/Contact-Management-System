#include"addressBooks.h"
#pragma once

void addContacts(AddressBooks *abooks) {
    system("cls");
    if(abooks->countContacts == MAX) {
        cout << "No contacts Available!" << endl;
        return ;
    }
    else {
        string name;
        cout << "     Enter Name : ";
        cin >> name;
        abooks->contactsArray[abooks->countContacts].name = name;

        int gender;
        cout << "     Enter Gender 1 for (Male) 2 for(Female) : ";
        while(true) {
            cin >> gender;
            if(gender == 1 || gender == 2) {
                abooks->contactsArray[abooks->countContacts].gender = gender;
                break;
            }
            cout << "     Enter a valid input!" << endl;
        }
        int age;
        cout << "     Enter Age : ";
        cin >> age;
        abooks->contactsArray[abooks->countContacts].age = age;

        string phone;
        cout << "     Enter Phone : ";
        cin >> phone;
        abooks->contactsArray[abooks->countContacts].phone = phone;

        string address;
        cout << "     Enter Address : ";
        cin >> address;
        abooks->contactsArray[abooks->countContacts].address = address;

        abooks->countContacts++;
        cout << "\n\n       Contacts added Successfully! \n\n";

    }

}