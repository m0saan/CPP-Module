//
// Created by moboustt on 6/8/2021.
//

#include "Array.hpp"
#include <string>

int main() {
    Array<int> arrOfInt;
    try {
        arrOfInt[0] = 10;
    } catch (std::exception &e) {
        std::cout << "Index out of range" << std::endl;
    }

    Array<float> arrOfFloats(10);
    int size = arrOfFloats.size();
    for (int i = 0; i < size; ++i)
        arrOfFloats[i] = static_cast<float>(i) * 2;
    std::cout << arrOfFloats << std::endl;

    Array<std::string> arrOfStrings(5);
    arrOfStrings[0] = "Tonight";
    arrOfStrings[1] = " we";
    arrOfStrings[2] = " honor";
    arrOfStrings[3] = " the";
    arrOfStrings[4] = " HERO.";
    std::cout << arrOfStrings << std::endl;

    arrOfStrings[22] = " kiss";
    std::cout << arrOfStrings << std::endl;
    return 0;
}
