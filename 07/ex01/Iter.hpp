//
// Created by moboustt on 6/8/2021.
//

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template<typename ARR, typename FUNC>
void Iter(ARR arr, int length, FUNC fn) {
	for(int i = 0; i < length; ++i)
		fn(arr[i]);
}


#endif // __ITER_HPP__
