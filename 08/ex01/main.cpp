//
// Created by moboustt on 6/8/2021.
//

#include "Span.hpp"


#if 0
int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2(1);
	sp2.addNumber(10);

	try {
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cout << "Exception caught: No such span" << std::endl;
	}

	try {
		sp2.addNumber(20);
	} catch (...){
		std::cout << "Exception caught: Cannot add more numbers." << std::endl;
	}

	Span sp3(1000);
	for(int i = 0; i < 1000; ++i)
		sp3.addNumber(i);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}

#endif

int main()
{
	try
	{
		Span sp = Span(100000);
		std::vector<int> v;
		// sp.addNumber(5);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(18);
		// sp.addNumber(11);
		// sp.addNumber(2147483647);
		// sp.addNumber(-2147483648);
		// sp.addNumber(20);
		for (size_t i = 1; i <= 100000; i++)
			v.push_back(i);
		sp.addNumber(v.begin(), v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}