//
// Created by moboustt on 31/1/2021.
//

#include "Karen.hpp"

int main(int ac, char **av) {

    if (ac == 2)
    {
        Karen k;
		std::cout << std::endl;

        k.complain(std::string(av[1]));
		std::cout << std::endl;
    }
    return 0;
}
