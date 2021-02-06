//
// Created by moboustt on 2/2/2021.
//

#include "Human.h"

typedef void (Human::*CALL_MEMBER_FN)(std::string const &target);

std::string Human::actions[3] = {"intimidatingShout", "meleeAttack", "rangedAttack" };

void Human::action(const std::string &action_name, const std::string &target) {
    CALL_MEMBER_FN actionsPool[] = { &Human::intimidatingShout, &Human::meleeAttack, &Human::rangedAttack };
    for (int i = 0; i < 3; ++i) {
        if (action_name == actions[i]) {
            CALL_MEMBER_FN func = actionsPool[i];
            (this->*func)(target);
        }
    }
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
