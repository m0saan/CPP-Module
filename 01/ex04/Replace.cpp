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

template<typename T>
void replace_word(std::string &line, std::string::size_type len, T itr, std::string const &s2) {
	int i = 0;
	while(len--)
		line[itr++] = s2[i++];
}

void Replace::processLine(std::string &line) {
    std::string::size_type itr = line.find(s1);
    while(itr != std::string::npos) {
        // line.replace(itr, s1.length(), s2);
		replace_word(line, s1.length(), itr, s2);
        itr = line.find(s1);
    }
}
