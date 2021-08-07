//
// Created by moboustt on 6/8/2021.
//

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:

	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack();
	MutantStack(const MutantStack<T>& other);
	MutantStack<T>& operator=(const MutantStack<T>& other);
	~MutantStack();

	iterator begin();
	iterator end();
};

template<typename T>
MutantStack<T>::MutantStack() { }

template<typename T>
MutantStack<T>::~MutantStack() { }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return (this->c.end()); }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return (this->c.begin()); }

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other) { *this = other; }

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other) {
	if (this != &other)
		*this = other;
	return *this;
}


#endif // __MUTANTSTACK_HPP__
