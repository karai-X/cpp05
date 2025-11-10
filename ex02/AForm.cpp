#include "AForm.hpp"

AForm::AForm() : _name("None"), _grade_for_sign(75), _grade_for_execute(75) {
  _is_signed = false;
}

AForm::AForm(std::string name, int grade_for_sign, int grade_for_execute)
    : _name(name), _grade_for_sign(grade_for_sign),
      _grade_for_execute(grade_for_execute) {
  _is_signed = false;
}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &other) {
  this->_is_signed = other._is_signed;
  return *this;
}

std::ostream &operator<<(std::ostream &out, const AForm &f) {
  out << f.getName() << " Is signed " << f.getIsSigned() << ", Sign grade "
      << f.getGradeSign() << ", Execute grade " << f.getGradeExecute() << ".";
  return out;
}

AForm::AForm(const AForm &other)
    : _name(other._name), _grade_for_sign(other._grade_for_sign),
      _grade_for_execute(other._grade_for_execute) {
  this->_is_signed = other._is_signed;
}

void AForm::beSigned(const Bureaucrat &b) {
  if (b.getGrade() >= _grade_for_sign)
    _is_signed = true;
  else
    throw GradeTooLowException();
}

std::string AForm::getName() const { return _name; }

int AForm::getGradeSign() const { return _grade_for_sign; }

int AForm::getGradeExecute() const { return _grade_for_execute; }

bool AForm::getIsSigned() const { return _is_signed; }

void AForm::setIsSigned(bool tf) { _is_signed = tf; }

void AForm::execute(Bureaucrat const &executor) const {
  if (!_is_signed) {
    throw GradeTooLowException();
  }
  if (executor.getGrade() < _grade_for_execute) {
    throw NotSignedException();
  }
  takeAction();
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade is too low!");
}

const char *AForm::GradeTooHighException::what() const throw() {
  return ("Grade is too high!");
}

const char *AForm::NotSignedException::what() const throw() {
  return ("The executor could not signe because the excecutor's grade is not "
          "enough.");
}
