//
// Created by moboustt on 1/2/2021.
//

#include "Replace.h"

Replace::Replace(const std::string &pFilename, const std::string &pS1, const std::string &pS2)
    : filename(pFilename), s1(pS1), s2(pS2) { }

Replace::~Replace() {
    std::cout << "Replace's Destructor has been called!" << std::endl;
}

void Replace::replace() {
    std::ifstream ifs(filename);
    std::stringstream ss;
    std::string line;
    while (getline(ifs, line))
        processLine(line);
}

void Replace::processLine(std::string &line) {
    std::cout << line << std::endl;
}
