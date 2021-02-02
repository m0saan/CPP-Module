//
// Created by moboustt on 2/2/2021.
//

#include <iostream>
#include "Fixed.h"

int main(){
    Fixed a;

    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    //std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

/*
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
 */