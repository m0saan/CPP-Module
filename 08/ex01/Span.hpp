//
// Created by moboustt on 6/8/2021.
//

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <vector>

class Span {

public:

	explicit Span(std::size_t N);
	~Span();
	Span(const Span& other);
	Span& operator=(const Span& other);

	void addNumber(int number);

	int shortestSpan();

	int longestSpan();

private:

	std::vector<int>	_ints;
	int					_size;

private:

	bool hasSpan() const;
};


#endif // __SPAN_HPP__
