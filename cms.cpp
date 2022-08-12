#include<iostream>
#include"menu.h"
#include"addContacts.h"
#include"addressBooks.h"
#include"displayContacts.h"
#include"findContacts.h"
#include"modifyContacts.h"
#include"deleteContact.h"
#include"clearContacts.h"

using namespace std;

int main() {
    AddressBooks addressBooks;
    while(true) {
        //system("cls");
        showMenu();
        cout << "\n\nEnter your Choice : ";
        int choice;
        cin >> choice;
        switch(choice) {
            case 1:
                addContacts(&addressBooks);
                break;
            case 2:
                displayContacts(&addressBooks);
                break;
            case 3:
                findContacts(&addressBooks);
                break;
            case 4:
                modifyContacts(&addressBooks);
                break;
            case 5:
                deleteContact(&addressBooks);
                break;
            case 6:
                clearContacts(&addressBooks);
                break;
            case 0:
                exit(0);
            default:
                cout << "       Invalid Input\n"; 
        }
        //system("cls");
    }
    return 0;
}