//
// Created by moboustt on 1/2/2021.
//

#include <iostream>
#include "Replace.h"

int main(int ac, const char ** const av){
    if (ac != 4) { std::cout << "Error: Invalid number of arguments" << std::endl << "Usage: filename [s1] [s2]" << std::endl; }
    else{
        Replace replace(av[1], av[2], av[3]);
        try {
            replace.replace();
        } catch (char *e) {
            std::cerr << "replace error: " << e << std::endl;
        }
    }
    return 0;
}