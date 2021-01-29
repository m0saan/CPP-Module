//
// Created by moboustt on 29/1/2021.
//

#include "MyAwesomePhoneBook.h"

int main(){
    bool isRunning = true;
    MyAwesomePhoneBook myAwesomePhoneBook;
    std::string input;

    std::cout << "#Phonebook" << std::endl << "# Enter your command [HELP, ADD, SEARCH, EXIT]:" << std::endl;

    while (isRunning){
        std::cout << ">";
        std::getline(std::cin, input);
        if (input == "ADD") {
            myAwesomePhoneBook.addContact();
            std::cout << "Contact has been added!" << std::endl;
        }
        else if (input == "SEARCH")
            myAwesomePhoneBook.searchContact();
        else if (input == "EXIT") {
            std::cout << "Exiting... " << std::endl;
            isRunning = false;
        }
    }
    return 0;
}