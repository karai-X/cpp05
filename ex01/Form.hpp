#pragma once
#include <iostream>
#include <string>
class Form {
private:
  std::string const _name;
  bool _is_signed;
  int const _grade_for_sign;
  int const _grade_for_execute;

public:
  Form();
  Form::Form(std::string name, int grade_for_sign, int grade_for_execute);
  ~Form();
  Form &operator=(const Form &other);
  Form(const Form &other);
  std::string getName() const;
  int getGradeSign() const;
  int getGradeExecute() const;
  bool Form::getIsSigned() const;
  const void increment();
  void decrement();
  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, const Form &f);
