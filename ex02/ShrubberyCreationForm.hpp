#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <random>

class ShrubberyCreationForm : public AForm {
private:
  std::string _target;

public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(std::string target);
  ~ShrubberyCreationForm();
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  void takeAction() const override;
};
