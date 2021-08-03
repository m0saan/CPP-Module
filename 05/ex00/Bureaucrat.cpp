//
// Created by moboustt on 3/8/2021.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() { }

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) { }

Bureaucrat::~Bureaucrat() { }

const std::string &Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::incrementGrade() { ++_grade; }

void Bureaucrat::decrementGrade() { --_grade; }
