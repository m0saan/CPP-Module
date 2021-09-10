//
// Created by moboustt on 29/1/2021.
//

#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H

#include <string>

class Contact {
public:
    std::string infos[5];

    static std::string fields[5];

    enum Field {
        FirstName = 0,
        LastName,
        Nickname,
        Phone,
        Secret
    };
};


#endif //CPP_MODULE_CONTACT_H
