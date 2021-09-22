//
// Created by moboustt on 5/8/2021.
//

#ifndef __OUTPUT_HPP__
#define __OUTPUT_HPP__

#include <string>
#include <iostream>

#define _NAN "nan"
#define NANF "nanf"
#define MINFF "-inff"
#define PINFF "+inff"
#define MINF "-inf"
#define PINF "+inf"

class OutPut {
public:
	OutPut(const std::string& chOut, const std::string& intOut, const std::string& floatOut, const std::string& doubleOut);
	OutPut(char chOut, int intOut, float floatOut, double doubleOut, bool add_0, bool no_conv);
};


#endif // __OUTPUT_HPP__
