//
// Created by moboustt on 29/1/2021.
//

#include <MyAwesomePhoneBook.hpp>

int main(){
    bool isRunning = true;
    std::string input;

    std::cout << "#Phonebook" << std::endl << "# Enter your command [HELP, ADD, SEARCH, EXIT]:" << std::endl;

    while (isRunning){
        std::cout << ">";
        std::getline(std::cin, input);
        if (input == "ADD") {}
        else if (input == "SEARCH") {}
        else if (input == "EXIT") {
            std::cout << "Exiting... " << std::endl;
            isRunning = false;
        }
    }
    return 0;
}