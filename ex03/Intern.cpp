#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &other) {
  (void)other;
  return *this;
}

Intern::Intern(const Intern &other) { (void)other; }

AForm *Intern::createShrubbery(const std::string &target) {
  return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomy(const std::string &target) {
  return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidential(const std::string &target) {
  return new PresidentPardonForm(target);
}

AForm *Intern::makeForm(std::string form, std::string target) {
  std::string formNames[3] = {"ShrubberyCreationForm", "RobotomyRequestForm",
                              "PresidentialPardonForm"};
  AForm *(Intern::*formCreators[3])(const std::string &) = {
      &Intern::createShrubbery, &Intern::createRobotomy,
      &Intern::createPresidential};
  for (int i = 0; i < 3; i++) {
    if (form == formNames[i]) {
      std::cout << "Intern creates " << form << std::endl;
      return (this->*formCreators[i])(target);
    }
  }
  std::cerr << form << " doesn't exist." << std::endl;
  return NULL;
}
