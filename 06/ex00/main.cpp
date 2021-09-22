//
// Created by moboustt on 5/8/2021.
//

#include "Scalar.hpp"

int exit_error(std::string const &error, int exit_code) {
    std::cout << error << std::endl;
    exit(exit_code);
}

bool AreSame(double a, double b) {
    return fabs(a - b) < std::numeric_limits<double>::epsilon();
}

int main(int ac, char **av) {

#if(1)
    char c;
    int i;
    float f;
    double d;

    if (ac == 2) {
        std::string input(av[1]);
        Scalar s(input);
        if (!s.checkInput()) {
            try {
                f = std::stof(input);
                i = std::stoi(input);
                d = static_cast<double>(f);
                c = static_cast<char>(i);

                if (i < 32 || i > 127)
                    c = 0;
                if (AreSame(f, i))
                    OutPut(c, i, f, d, true, false);
                else
                    OutPut(c, i, f, d, false, false);

            } catch (std::exception &e) {
                std::cout << "char: impossible." << std::endl;
                std::cout << "int: impossible." << std::endl;
                d = static_cast<double>(f);
                OutPut(-1, -1, f, d, false, true);
            }
        }
    } else
        std::cout << "Error: arguments." << std::endl;
#endif
    return 0;
}
