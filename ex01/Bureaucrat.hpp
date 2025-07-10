#pragma once
#include <iostream>
#include <string>
#include "Form.hpp"

class Form;
class Bureaucrat {
private:
  std::string const _name;
  int _grade;

public:
  Bureaucrat();
  Bureaucrat(std::string name, int garade);
  ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat &other);
  Bureaucrat(const Bureaucrat &other);
  std::string getName() const;
  int getGrade() const;
  void signForm(Form &f);
  void increment();
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);
