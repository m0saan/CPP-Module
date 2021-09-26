cmake_minimum_required(VERSION 3.17)
project(CPP_Module)


if (1)
    set(CMAKE_CXX_STANDARD 98)
    add_executable(CPP_Module 07/ex02/main.cpp)

    set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -O0 -g3 -fsanitize=address")
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
endif ()

if (0)
    set(CMAKE_CXX_STANDARD 11)
    add_executable(CPP_Module test.cpp 04/ex01/Cat.cpp 04/ex00/Cat.hpp 06/ex01/whatever.h)
endif ()
