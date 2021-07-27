//
// Created by moboustt on 31/1/2021.
//

#include "Karen.hpp"

int main() {

   Karen k;
   k.complain(std::string("warning"));
   k.complain(std::string("info"));
   k.complain(std::string("debug"));
   k.complain(std::string("error"));
    return 0;
}
