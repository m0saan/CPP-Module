//
// Created by moboustt on 30/1/2021.
//

#include "ContactConsole.h"

ContactConsole::ContactConsole(const std::string &fName, const std::string &lName, const std::string &nick) :
            firstName(fName), lastName(lName), nickName(nick) {}

const std::string &ContactConsole::getFirstName() const {
    return firstName;
}

const std::string &ContactConsole::getLastName() const {
    return lastName;
}

const std::string &ContactConsole::getNickName() const {
    return nickName;
}
