//
// Created by moboustt on 2/2/2021.
//

#ifndef CPP_MODULE_HUMAN_H
#define CPP_MODULE_HUMAN_H

#include <iostream>


class Human {
public:
    void action(std::string const & action_name, std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);

private:
    void meleeAttack(std::string const & target);
};


#endif //CPP_MODULE_HUMAN_H
