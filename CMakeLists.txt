cmake_minimum_required(VERSION 3.17)
project(CPP_Module)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex01)

add_executable(CPP_Module
        00/ex01/MyAwesomePhoneBook.cpp
        00/ex01/MyAwesomePhoneBook.h
        00/ex01/ContactConsole.cpp
        00/ex01/ContactConsole.h
        00/ex01/main.cpp
        00/ex01/Contact.cpp
        00/ex01/Contact.h)
