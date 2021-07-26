#include <string>
#include <iostream>

int main() 
{

    // Create a string object.
    std::string str("HI THIS IS BRAIN");
    
    std::string *stringPTR = &str;

    std::string &stringREF = str;

    // display the address in memory of the string.
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;


    return 0;
}
