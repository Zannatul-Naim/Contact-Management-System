#include<iostream>
#include"contacts.hpp"
#pragma once
#define MAX 1000
using namespace std;

class AddressBooks {
    public:
    Contacts contactsArray[MAX];
    int countContacts = 0;
};