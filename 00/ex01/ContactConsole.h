//
// Created by moboustt on 30/1/2021.
//

#ifndef __CONTACTCONSOLE_H__
#define __CONTACTCONSOLE_H__

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


#endif // __CONTACTCONSOLE_H__
