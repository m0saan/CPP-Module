//
// Created by moboustt on 29/1/2021.
//

#ifndef CPP_MODULE_MYAWESOMEPHONEBOOK_H
#define CPP_MODULE_MYAWESOMEPHONEBOOK_H

#include <iostream>
#include "Contact.h"

class MyAwesomePhoneBook {
public:
    MyAwesomePhoneBook();
    ~MyAwesomePhoneBook();

    void	addContact(void);
    void	searchContact(void);
    void	showSearchHeader(void);
    void    showPrompts(int index, Contact &contact);

private:
    std::size_t size;
    Contact *contacts;

    void putTable() const;
};


#endif //CPP_MODULE_MYAWESOMEPHONEBOOK_H
