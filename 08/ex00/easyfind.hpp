//
// Created by moboustt on 6/8/2021.
//

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>
#include <algorithm>
#include <vector>
#include <forward_list>

template<typename T>

int easyfind(T t, int value) {
	 typename T::iterator elem = std::find(t.begin(), t.end(), value);
	if (elem == t.end())
		return -1;
	return *elem;
}

#endif // __EASYFIND_HPP__
