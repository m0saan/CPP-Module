#include <cctype>
#include <iostream>

int main(int ac, char **av){
    
    if (ac==1) { std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; return 0; }
    for(size_t i=1; i<ac; ++i){
        for (size_t j=0; av[i][j] != 0; ++j) {
            char ch = av[i][j];
            if (isalpha(ch))
                std::cout << (char)std::toupper(ch);
            else std::cout << (char)ch;
        }
    }
    return 0;
}
