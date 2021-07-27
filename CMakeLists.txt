cmake_minimum_required(VERSION 3.17)
project(CPP_Module)


if (0)
    set(CMAKE_CXX_STANDARD 98)
    add_executable(CPP_Module 02/ex00/Fixed.cpp 02/ex00/main.cpp test.cpp)
endif ()

if (1)
    set(CMAKE_CXX_STANDARD 11)
    add_executable(CPP_Module test.cpp)
endif ()
