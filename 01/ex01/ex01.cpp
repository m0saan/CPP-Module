//
// Created by moboustt on 30/1/2021.
//

#include <string>
#include <iostream>

void memoryLeak() {
    std::string* panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}

int main(){
    memoryLeak();
    return 0;
}