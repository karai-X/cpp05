#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), _target("no_name") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  _target = other._target;
  setIsSigned(other.getIsSigned());
  return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other) {
  _target = other._target;
  setIsSigned(other.getIsSigned());
}

void ShrubberyCreationForm::takeAction() const {
  std::ofstream outfile((_target + "_shrubbery").c_str());
  if (outfile) {
    outfile << "        *\n"
            << "       /#\\\n"
            << "      /###\\\n"
            << "     /#####\\\n"
            << "    /##*####\\\n"
            << "   /#########\\\n"
            << "  /###########\\\n"
            << " /#############\\\n"
            << "/######@@@######\\\n"
            << "       |||\n"
            << "       |||\n";
  }
}
