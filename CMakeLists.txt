cmake_minimum_required(VERSION 3.17)
project(CPP_Module)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex01)

add_executable(CPP_Module 03/ex02/ClapTrap.cpp 03/ex02/ScavTrap.cpp 03/ex02/FragTrap.cpp 03/ex02/main.cpp)
