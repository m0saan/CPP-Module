cmake_minimum_required(VERSION 3.17)
project(CPP_Module)


set(CMAKE_CXX_STANDARD 98)
add_executable(CPP_Module 08/ex01/main.cpp 08/ex01/Span.cpp)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -O0 -g3 -fsanitize=address")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
