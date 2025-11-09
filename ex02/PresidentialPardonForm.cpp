#include "PresidentialPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm()
    : AForm("PresidentPardonForm", 25, 5), _target("no_name") {}

PresidentPardonForm::PresidentPardonForm(std::string target)
    : AForm("PresidentPardonForm", 25, 5), _target(target) {}

PresidentPardonForm::~PresidentPardonForm() {}

PresidentPardonForm &
PresidentPardonForm::operator=(const PresidentPardonForm &other) {
  _target = other._target;
  setIsSigned(other.getIsSigned());
  return *this;
}

PresidentPardonForm::PresidentPardonForm(const PresidentPardonForm &other)
    : AForm(other) {
  _target = other._target;
  setIsSigned(other.getIsSigned());
}

void PresidentPardonForm::takeAction() const {
  std::cout << _target << " has been pardoned by Zaphod Beeblebrox."
            << std::endl;
}
