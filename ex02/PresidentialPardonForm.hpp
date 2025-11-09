#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class PresidentPardonForm : public AForm {
private:
  std::string _target;

public:
  PresidentPardonForm();
  PresidentPardonForm(std::string target);
  ~PresidentPardonForm();
  PresidentPardonForm &operator=(const PresidentPardonForm &other);
  PresidentPardonForm(const PresidentPardonForm &other);
  void takeAction() const override;
};
