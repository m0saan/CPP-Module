//
// Created by moboustt on 29/1/2021.
//

#ifndef CPP_MODULE_MYAWESOMEPHONEBOOK_H
#define CPP_MODULE_MYAWESOMEPHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.h"
#include "ContactConsole.h"

class MyAwesomePhoneBook {
public:
    MyAwesomePhoneBook();
    ~MyAwesomePhoneBook();

    void	addContact();
    void	searchContact();
    void    showPrompts(int index, Contact &contact);
    bool    isEmptyPhonebook() const;
    void    printContacts();

private:
    std::size_t size;
    Contact *contacts;

    void putTable() const;
    void putTableColmuns(const ContactConsole &contactConsole, std::size_t i) const;
    std::string checkOutput(const std::string &str) const;
};


#endif //CPP_MODULE_MYAWESOMEPHONEBOOK_H
