#include "Form.hpp"

Form::Form() : _name("None"), _grade_for_sign(75), _grade_for_execute(75) {
  _is_signed = false;
}

Form::Form(std::string name, int grade_for_sign, int grade_for_execute)
    : _name(name), _grade_for_sign(grade_for_sign),
      _grade_for_execute(grade_for_execute) {
  _is_signed = false;
}

Form::~Form() {}

Form &Form::operator=(const Form &other) {
  this->_is_signed = other._is_signed;
  return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &f) {
  out << f.getName() << "Is signed " << f.getIsSigned() << ", Sign grade "
      << f.getGradeSign() << ", Execute grade " << f.getGradeExecute() << ".";
  return out;
}

Form::Form(const Form &other) : _name(other._name) {
  this->_is_signed = other._is_signed;
}

std::string Form::getName() const { return _name; }

int Form::getGradeSign() const { return _grade_for_sign; }

int Form::getGradeExecute() const { return _grade_for_execute; }

bool Form::getIsSigned() const { return _is_signed; }

// void Form::increment() {
//   if (_grade == 150)
//     throw GradeTooLowException();
//   else
//     _grade += 1;
// }

// void Form::decrement() {
//   if (_grade == 1)
//     throw GradeTooHighException();
//   else
//     _grade -= 1;
// }

const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw() {
  return ("Grade is too high!");
}
