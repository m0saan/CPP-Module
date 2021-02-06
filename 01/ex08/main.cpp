//
// Created by moboustt on 2/2/2021.
//

#include "Human.h"

int main() {
    Human human;
    std::cout << "*------------------------ Calling member functions -----------------------*" << std::endl;
    human.rangedAttack(std::string("ME"));
    human.intimidatingShout(std::string("THEY"));
    human.meleeAttack(std::string("THE WORLD"));

    human.action(std::string("rangedAttack"), "DAEMON");
    human.action(std::string("meleeAttack"), "DAEMON");
    human.action(std::string("intimidatingShout"), "DAEMON");
    return 0;
}