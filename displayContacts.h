#include"addressBooks.h"
#pragma once

void displayContacts(AddressBooks *abooks) {
    system("cls");
    if(abooks->countContacts == 0) {
        cout << "\n\n---------- Contacts List is empty! ----------\n\n" << endl;
    }
    else {
        int index = abooks->countContacts;
        for(int i = 0; i < index; i++) {
            cout << "          Name : " << abooks->contactsArray[i].name << endl;
            cout << "          Gender : ";
            if(abooks->contactsArray[i].gender == 1) cout << "Male" << endl;
            else cout << "Female" << endl;

            cout << "          Age : " << abooks->contactsArray[i].age << endl;
            cout << "          Phone : " << abooks->contactsArray[i].phone << endl;
            cout << "          Addrsss : " << abooks->contactsArray[i].address << endl;
        }
        cout << endl << endl;
    }
}