cmake_minimum_required(VERSION 3.17)
project(CPP_Module)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex01)

add_executable(CPP_Module 01/ex05/Brain.cpp
        01/ex05/Human.cpp
        01/ex05/main.cpp)
