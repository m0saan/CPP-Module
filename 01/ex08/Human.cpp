//
// Created by moboustt on 2/2/2021.
//

#include "Human.h"

void Human::action(const std::string &action_name, const std::string &target) {
    std::cout << ""  << std::endl;
}

void Human::rangedAttack(const std::string &target) {
    std::cout << "rangedAttack been called!" << std::endl;
}

void Human::intimidatingShout(const std::string &target) {
    std::cout << "intimidatingShout been called!" << std::endl;
}

void Human::meleeAttack(const std::string &target) {
    std::cout << "meleeAttack been called!" << std::endl;
}
