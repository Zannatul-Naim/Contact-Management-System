#include<iostream>
#include"contacts.h"
#pragma once
#define MAX 1000
using namespace std;

class AddressBooks {
    public:
    Contacts contactsArray[MAX];
    int countContacts = 0;
};