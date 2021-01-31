//
// Created by moboustt on 31/1/2021.
//

#include "Brain.h"
#include <sstream>
#include <iostream>

Brain::Brain() {
    std::cout << "Brain's constructor been called!" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain's destructor been called!" << std::endl;
}

std::string Brain::identify()  {
    void *hexAddress = this;
    std::stringstream ss;
    ss << hexAddress;
    std::string str = ss.str();
    return str;
}
