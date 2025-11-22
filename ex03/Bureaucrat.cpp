#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("None") { _grade = 75; }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
  if (grade < 1)
    throw GradeTooHighException();
  else if (grade > 150)
    throw GradeTooLowException();
  else
    _grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  this->_grade = other._grade;
  return *this;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b) {
  out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
  return out;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name) {
  this->_grade = other._grade;
}

void Bureaucrat::signForm(AForm &f) {
  try {
    f.beSigned(*this);
    std::cout << this->getName() << " signed " << f.getName() << std::endl;
  } catch (const std::exception &e) {
    std::cout << this->getName() << " couldn’t sign " << f.getName()
              << " because " << e.what() << std::endl;
  }
}

std::string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::increment(){
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade -= 1;
}

void Bureaucrat::decrement(){
  if (_grade == 150)
    throw GradeTooLowException();
  else
    _grade += 1;
}

void Bureaucrat::executeForm(AForm const &form) const {
  try {
    form.execute(*this);
    std::cout << this->_name << " executed " << form.getName() << std::endl;

  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade is too low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade is too high!");
}
