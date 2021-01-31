//
// Created by moboustt on 31/1/2021.
//

#include "Human.h"
#include "Brain.h"

int main() {
    Human bob;

    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
    return 0;
}