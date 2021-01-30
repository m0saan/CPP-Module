//
// Created by moboustt on 30/1/2021.
//

#ifndef CPP_MODULE_CONTACTCONSOLE_H
#define CPP_MODULE_CONTACTCONSOLE_H

#include <string>
#include <iostream>
#include "Contact.h"

class ContactConsole {
public:
    ContactConsole();

    ContactConsole(const std::string &fName, const std::string &lName, const std::string &nickName);

    const std::string &getFirstName() const;

    const std::string &getLastName() const;

    const std::string &getNickName() const;

    void displayContactInfos(const Contact &contact) const;
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
};


#endif //CPP_MODULE_CONTACTCONSOLE_H
