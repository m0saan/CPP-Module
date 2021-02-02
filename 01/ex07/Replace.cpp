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
    std::fstream fs;
    fs.open(filename, std::ios::out | std::ios::in);
    std::ostringstream oss;
    std::string line;
    while (getline(fs, line)) {
        processLine(line);
        oss << line;
    }
    fs << oss.rdbuf();
    fs.close();
}

void Replace::processLine(std::string &line) {
    std::string::size_type itr = line.find(s1);
    while(itr != std::string::npos) {
        line.replace(itr, s1.length(), s2);
        itr = line.find(s1);
    }
}
