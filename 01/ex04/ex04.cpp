//
// Created by moboustt on 31/1/2021.
//

#include <iostream>
#include <string>

int main(){
    std::string str("HI THIS IS BRAIN");

    std::cout << "----------- reference to string demonstration -----------" << std::endl;
    std::string &strRef = str;
    std::cout << "strRef: " << strRef << std::endl;
    strRef = "THIS IS NOT A reference to string";
    std::cout << "str: " << str << std::endl;

    str = "HI THIS IS BRAIN";
    std::cout << "----------- pointer to string demonstration -----------" << std::endl;
    std::string *strPtr = &str;
    std::cout << "strPtr: " << *strPtr << std::endl;
    *strPtr = "THIS IS NOT A Pointer to string";
    std::cout << "str: " << str << std::endl;
    return 0;
}