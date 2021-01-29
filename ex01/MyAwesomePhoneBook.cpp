//
// Created by moboustt on 29/1/2021.
//

#include "MyAwesomePhoneBook.h"

MyAwesomePhoneBook::MyAwesomePhoneBook() : size() {
    Contacts = new contact[8];
}

MyAwesomePhoneBook::~MyAwesomePhoneBook() {
    delete Contacts;
}
