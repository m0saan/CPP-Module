//
// Created by moboustt on 29/1/2021.
//

#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H

#include "MyAwesomePhoneBook.h"

class contact {
public:
private:
    std::string infos[11];

    enum Field {
        FirstName = 0,
        LastName,
        Nickname,
        Login,
        Address,
        Email,
        Phone,
        Birthday,
        FavoriteMeal,
        UnderwearColor,
        Secret
    };
};


#endif //CPP_MODULE_CONTACT_H
