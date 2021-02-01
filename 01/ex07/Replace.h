//
// Created by moboustt on 1/2/2021.
//

#ifndef CPP_MODULE_REPLACE_H
#define CPP_MODULE_REPLACE_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Replace {
public:

    Replace(const std::string &filename, const std::string &s1, const std::string & s2);
    ~Replace();
    void replace();
    void processLine(std::string &line);

private:
    std::string s1;
    std::string s2;
    std::string filename;
};


#endif //CPP_MODULE_REPLACE_H
