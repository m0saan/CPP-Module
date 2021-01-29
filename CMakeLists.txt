cmake_minimum_required(VERSION 3.17)
project(CPP_Module)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex01)

add_executable(CPP_Module
        ex01/MyAwesomePhoneBook.cpp
        ex01/MyAwesomePhoneBook.hpp
        ex01/main.cpp)
