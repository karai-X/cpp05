#pragma once
#include <iostream>
#include <string>
class Bureaucrat {
private:
	std::string const _name;
	int _grade;
public:
  Bureaucrat();
  Bureaucrat::Bureaucrat(std::string name, int garade);
  ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat &other);
  Bureaucrat(const Bureaucrat &other);
  std::string getName() const;
  int getGrade() const;
  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };
};
