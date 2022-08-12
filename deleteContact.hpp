#include"addContacts.hpp"
#include"search.hpp"
#include"contacts.hpp"

#pragma once

void deleteContact(AddressBooks *abooks) {
    system("cls");
    string phone;
    cout << "           Enter Phone Number to Delete : ";
    cin >> phone;

    int index = search(phone, abooks);
    if(index > -1) {

        Contacts temp = abooks->contactsArray[index];
        for(int i = index; i <= abooks->countContacts - 1; i++) { 
            abooks->contactsArray[i] = abooks->contactsArray[i+1];
        }
        abooks->countContacts -= 1;

        cout << "           Contact with phone : " << temp.phone << " was deleted successfully!" << endl;
    }
    else {
        system("cls");
        cout << "           You Searched for : " << phone << endl << endl;
        cout << "\n\n           Contacts Not Found!         \n\n";
    }  
}