//
// Created by moboustt on 2/2/2021.
//

#ifndef CPP_MODULE_HUMAN_H
#define CPP_MODULE_HUMAN_H

#include <iostream>
#include <string>


class Human {
public:

    void action(std::string const & action_name, std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);
    void meleeAttack(std::string const & target);
    static std::string actions[3];
};


#endif //CPP_MODULE_HUMAN_H
