cmake_minimum_required(VERSION 3.17)
project(CPP_Module)


if (1)
    set(CMAKE_CXX_STANDARD 98)
    add_executable(CPP_Module 04/ex03/AMateria.cpp 04/ex03/AMateria.hpp 04/ex03/ICharacter.hpp 04/ex03/main.cpp 04/ex03/IMateriaSource.hpp 04/ex03/Character.cpp 04/ex03/Character.hpp 04/ex03/MateriaSource.cpp 04/ex03/MateriaSource.hpp 04/ex03/Ice.cpp 04/ex03/Ice.hpp 04/ex03/Cure.cpp 04/ex03/Cure.hpp)

    set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -O0 -g3 -fsanitize=address")
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
endif ()

if (0)
    set(CMAKE_CXX_STANDARD 11)
    add_executable(CPP_Module test.cpp 04/ex00/Cat.cpp 04/ex00/Cat.hpp)
endif ()
