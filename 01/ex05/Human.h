//
// Created by moboustt on 31/1/2021.
//

#ifndef CPP_MODULE_HUMAN_H
#define CPP_MODULE_HUMAN_H

#include "Brain.h"

class Human {
public:

    Human();
    ~Human();
    std::string identify() ;
    Brain getBrain() const;

private:
    Brain brain;
};


#endif //CPP_MODULE_HUMAN_H
