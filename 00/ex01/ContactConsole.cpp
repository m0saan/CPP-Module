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


void ContactConsole::displayContactInfos(const Contact &contact) const {
    std::cout << "First Name: " << contact.infos[0] << std::endl;
    std::cout << "Last Name: " << contact.infos[1] << std::endl;
    std::cout << "Nick Name: " << contact.infos[2] << std::endl;
    std::cout << "Login: " << contact.infos[3] << std::endl;
    std::cout << "Address: " << contact.infos[4] << std::endl;
    std::cout << "Email: " << contact.infos[5] << std::endl;
    std::cout << "Phone: " << contact.infos[6] << std::endl;
    std::cout << "Birthday: " << contact.infos[7] << std::endl;
    std::cout << "Favourite Meal: " << contact.infos[8] << std::endl;
    std::cout << "UnderwearColor: " << contact.infos[9] << std::endl;
    std::cout << "Secret: " << contact.infos[10] << std::endl;
}

ContactConsole::ContactConsole() {
}
