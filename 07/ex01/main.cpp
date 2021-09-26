/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboustt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:09:52 by moboustt          #+#    #+#             */
/*   Updated: 2021/09/24 12:14:16 by moboustt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by moboustt on 6/8/2021.
//

#include "Iter.hpp"


template <typename T>
void print(T t1) {
	std::cout << t1 << std::endl;
}

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	::iter( tab, 5, print );
	::iter( tab2, 5, print );

	return 0;
}


#if 0

void toUpper(char c) {
	std::cout << static_cast<char>(toupper(c)) << std::endl;
}

template<typename T>
void print(T t1) {
	std::cout << t1 << std::endl;
}

int main() {
	std::cout << "****************** Testing with an array of ints ******************" << std::endl;
	int intArr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	::iter(intArr, 8, print);

	std::cout << std::endl << "****************** Testing with an array of double ******************" << std::endl;
	double doubleArr[] = {1.8, 2.2, 3.6, 4., 5.5, 6.1, 7.2, 8.22};
	::iter(doubleArr, 8, print);

	std::cout << std::endl << "****************** Testing with an array of chars ******************" << std::endl;
	char characters[] = {'h', 'e', 'l', 'l', 'o', ' ', ',', 'w', 'o', 'r', 'l', 'd', '\0'};
	::iter(characters, 12, toUpper);
	::iter(characters, 12, print);
	return 0;
}

#endif
