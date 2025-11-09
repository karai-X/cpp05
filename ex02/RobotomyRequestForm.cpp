#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45), _target("no_name");
RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target);
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  _target = other._target;
  setIsSigned(other.getIsSigned());
  return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other) {
  _target = other._target;
  setIsSigned(other.getIsSigned());
}

void RobotomyRequestForm::takeAction() const {
  std::cout << "*Bzzzzzz... Whirrrr...*" << std::endl;
  int r = rand() % 2;
  if (r == 1) {
    std::cout << "Successed: " <<_target << " has been robotomized." << std::endl;
  } else {
    std::cout << "Failed: Robotomizing " << _target << "is failed." << std::endl;
  }
}
