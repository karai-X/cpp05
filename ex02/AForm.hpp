#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <sstream>

class Bureaucrat;
class AForm {
private:
  std::string const _name;
  bool _is_signed;
  int const _grade_for_sign;
  int const _grade_for_execute;

public:
  AForm();
  AForm(std::string name, int grade_for_sign, int grade_for_execute);
  ~AForm();
  AForm &operator=(const AForm &other);
  AForm(const AForm &other);
  void beSigned(const Bureaucrat &b);
  std::string getName() const;
  int getGradeSign() const;
  int getGradeExecute() const;
  bool getIsSigned() const;
  bool setIsSigned(bool tf);
  void execute(Bureaucrat const &executor) const;
  virtual void takeAction() const = 0;

  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, const AForm &f);
