cmake_minimum_required(VERSION 3.17)
project(CPP_Module)


if (1)
    set(CMAKE_CXX_STANDARD 98)
    add_executable(CPP_Module 03/ex03/main.cpp 03/ex03/ClapTrap.cpp 03/ex03/FragTrap.cpp 03/ex03/ScavTrap.cpp 03/ex03/DiamondTrap.cpp)
endif ()

if (0)
    set(CMAKE_CXX_STANDARD 11)
    add_executable(CPP_Module test.cpp)
endif ()
