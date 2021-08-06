//
// Created by moboustt on 6/8/2021.
//

#include "Span.hpp"

Span::Span(std::size_t N) : _size(static_cast<int>(N)) {}

Span::~Span() {}

Span::Span(const Span &other) : _ints(other._ints), _size(other._size) {}

Span &Span::operator=(const Span &other) {
	if(this != &other) {
		_ints = other._ints;
		_size = other._size;
	}
	return *this;
}

void Span::addNumber(int number) {
	if(--_size < 0)
		throw std::exception();
	_ints.push_back(number);
}

int Span::shortestSpan() {
	if(!hasSpan())
		throw std::exception();
	std::sort(_ints.begin(), _ints.end());
	int ans = _ints[1] - _ints[0];

	for(int i = 0; i < 1; ++i)
		if(i + 1 < static_cast<int>(_ints.size()))
			ans = std::min(ans, abs(_ints[i] - _ints[i + 1]));
	return ans;
}

int Span::longestSpan() {
	if(!hasSpan())
		throw std::exception();
	std::sort(_ints.begin(), _ints.end());
	return _ints[_ints.size() - 1] - _ints[0];
}

bool Span::hasSpan() const { return _ints.size() > 1; }

