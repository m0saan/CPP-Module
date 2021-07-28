//
// Created by moboustt on 1/2/2021.
//

#include "Replace.h"

Replace::Replace(const std::string &pFilename, const std::string &pS1, const std::string &pS2)
    :s1(pS1), s2(pS2), filename(pFilename) {
    std::cout << "Replace's Constructor has been called!" << std::endl;
}

Replace::~Replace() {
    std::cout << "Replace's Destructor has been called!" << std::endl;
}

void Replace::replace() {
    std::ifstream ifs(filename);
    std::string line, stream;
    while (getline(ifs, line)) {
        processLine(line);
        stream.append(line);
    }
    std::cout << stream << std::endl;
    std::ofstream ofs;
    ofs.open(filename.append(".replace"), std::ios::out);
    ofs << stream;
    ifs.close();
    ofs.close();
}

void Replace::processLine(std::string &line) {
    std::string::size_type itr = line.find(s1);
    while(itr != std::string::npos) {
		line.erase(itr, s1.length());
		line.insert(itr, s2);
        itr = line.find(s1);
    }
}
