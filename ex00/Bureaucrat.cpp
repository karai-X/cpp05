#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :_name("None") {
	_grade = 75;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  this->_grade = other._grade;
  return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name) {
  this->_grade = other._grade;
}

std::string Bureaucrat::getName() const{
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade is too low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade is too high!");
}


