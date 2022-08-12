#include"addressBooks.h"
#pragma once
int search(string phone, AddressBooks *abooks) {
    int start = 0;
    int end = abooks->countContacts-1;
    while(start <= end) {
        int mid = (start + end)/2;
        if(abooks->contactsArray[mid].phone == phone) return mid;
        else if(abooks->contactsArray[abooks->countContacts].phone.compare(phone) > 0) end = mid-1;
        else start = mid+1;
    }
    return -1;
} 