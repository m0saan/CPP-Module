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
	// try {
	// 	std::string input(av[1]);
	// 	float f = std::stof(input);
	// 	std::cout << f << std::endl;
	// } catch (std::exception const &e) {
	// 	std::cout << e.what() << std::endl;
	// }
#if(1)
	char c;
	int i;
	float f;
	double d;

	if(ac == 2) {
		std::string input(av[1]);
		Scalar s(input);
		if(!s.checkInput()) {
			try {
				f = std::stof(input);
				i = std::stoi(input);
				d = static_cast<double>(f);
				c = static_cast<char>(i);

				if(AreSame(f, i))
					OutPut(c, i, f, d, true);
				else
					OutPut(c, i, f, d, false);

			} catch (std::exception &e) {
				std::cout << "conversion is impossible." << std::endl;
			}
		}
	} else
		std::cout << "Error: arguments." << std::endl;
#endif
	return 0;
}

/*
 * 		if(s.isFloat())
			std::cout << "FLOAT" << std::endl;
		else if(s.isDouble())
			std::cout << "DOUBLE" << std::endl;
		else if(s.isZero())
			std::cout << "ZERO" << std::endl;
		else if(s.isInt())
			std::cout << "INT" << std::endl;

 */