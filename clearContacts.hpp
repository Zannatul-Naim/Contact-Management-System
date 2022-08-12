#include"addressBooks.hpp"

void clearContacts(AddressBooks *abooks) {
    cout << "\n\n           Are you sure want to delete all contacts(y\\n) : ";
    char ch;
    cin >> ch;
    if(ch == 'y') {
        abooks->countContacts = 0;

        cout << "\n\n          All Contacts Cleared Successfully!" << endl;
    }
}