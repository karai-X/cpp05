#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

class AForm;
class Intern {
private:
public:
  Intern();
  ~Intern();
  Intern &operator=(const Intern &other);
  Intern(const Intern &other);
  AForm *makeForm(std::string form, std::string target);
  AForm *createShrubbery(const std::string &target);
  AForm *createRobotomy(const std::string &target);
  AForm *createPresidential(const std::string &target);
};
