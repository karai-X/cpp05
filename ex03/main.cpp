#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
  {
    std::cout << "=== Make RobotomyRequestForm ===" << std::endl;
    Intern i;
    AForm *r = i.makeForm("RobotomyRequestForm", "form1");
    // sign=72, exec=42
    Bureaucrat b("b1", 150);
    b.signForm(*r);
    std::cout << b << std::endl;
    std::cout << *r << std::endl;
    b.executeForm(*r);
    delete r;

    std::cout << "\n=== Make PresidentPardonForm ===" << std::endl;
    // sign=25, exec=5
    AForm *p = i.makeForm("PresidentialPardonForm", "form2");
    b.signForm(*p);
    std::cout << b << std::endl;
    std::cout << *p << std::endl;
    b.executeForm(*p);
    delete p;

    std::cout << "\n=== Make ShrubberyCreationForm ===" << std::endl;
    // sign=145, exec=137
    AForm *s = i.makeForm("ShrubberyCreationForm", "form3");
    b.signForm(*s);
    std::cout << b << std::endl;
    std::cout << *s << std::endl;
    b.executeForm(*s);
    delete s;

    std::cout << "\n=== Cannot Make Form ===" << std::endl;
    AForm *n = i.makeForm("InvalidName", "form4");
    delete n;
  }
}
