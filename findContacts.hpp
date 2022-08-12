#include"addressBooks.hpp"
#include"search.hpp"
#pragma once

void findContacts(AddressBooks *abooks) {
    system("cls");
    cout << "Enter Phone Number to find : ";
    string phone;
    cin >> phone;
    int index = search(phone, abooks);
    if(index > -1) {
        cout << "           You Searched for : " << phone << endl;
        cout << "\n\n           Contacts Found!\n\n";
        cout << "          Name : " << abooks->contactsArray[index].name << endl;
        cout << "          Gender : ";
        if(abooks->contactsArray[index].gender == 1) cout << "Male" << endl;
        else cout << "Female" << endl;
        cout << "          Age : " << abooks->contactsArray[index].age << endl;
        cout << "          Phone : " << abooks->contactsArray[index].phone << endl;
        cout << "          Addrsss : " << abooks->contactsArray[index].address << endl;
    }
    else {
        cout << "           You Searched for : " << phone << endl;
        cout << "\n\n           Contacts Not Found!            " << endl;
    }
}