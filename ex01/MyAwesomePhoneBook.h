//
// Created by moboustt on 29/1/2021.
//

#ifndef CPP_MODULE_MYAWESOMEPHONEBOOK_H
#define CPP_MODULE_MYAWESOMEPHONEBOOK_H

#include <string>
#include <iostream>
#include "contact.h"

class MyAwesomePhoneBook {
public:
    MyAwesomePhoneBook();
    ~MyAwesomePhoneBook();
private:
    std::size_t size;
    contact *Contacts;
};


#endif //CPP_MODULE_MYAWESOMEPHONEBOOK_H
