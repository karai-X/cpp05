#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public AForm {
private:
  std::string _target;

public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target);
  ~RobotomyRequestForm();
  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
  RobotomyRequestForm(const RobotomyRequestForm &other);
  void takeAction() const override;
};
