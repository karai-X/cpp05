#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
  {
    std::cout << "=== No exception: RobotomyRequestForm ===" << std::endl;
    Bureaucrat b("b1", 145);
    // sign=72, exec=42
    RobotomyRequestForm r("r1");
    b.signForm(r);
    std::cout << b << std::endl;
    std::cout << r << std::endl;
    b.executeForm(r);

    std::cout << "\n=== No exception: PresidentPardonForm ===" << std::endl;
    // sign=25, exec=5
    PresidentPardonForm p("p1");
    b.signForm(p);
    std::cout << b << std::endl;
    std::cout << p << std::endl;
    b.executeForm(p);

    std::cout << "\n=== No exception: ShrubberyCreationForm ===" << std::endl;
    // sign=145, exec=137
    ShrubberyCreationForm s("s1");
    b.signForm(s);
    std::cout << b << std::endl;
    std::cout << s << std::endl;
    b.executeForm(s);
  }
  {
    std::cout << "\n=== Could not sign: RobotomyRequestForm ===" << std::endl;
    Bureaucrat b("b1", 50);
    // sign=72, exec=42
    RobotomyRequestForm r("r1");
    b.signForm(r);
    std::cout << b << std::endl;
    std::cout << r << std::endl;
    b.executeForm(r);
  }
  {
    std::cout << "\n=== Could not sign: PresidentPardonForm ===" << std::endl;
    Bureaucrat b("b1", 20);
    // sign=25, exec=5
    PresidentPardonForm p("p1");
    b.signForm(p);
    std::cout << b << std::endl;
    std::cout << p << std::endl;
    b.executeForm(p);
  }
  {
    std::cout << "\n=== Could not sign: ShrubberyCreationForm ===" << std::endl;
    Bureaucrat b("b1", 140);
    // sign=145, exec=137
    ShrubberyCreationForm s("s1");
    b.signForm(s);
    std::cout << b << std::endl;
    std::cout << s << std::endl;
    b.executeForm(s);
  }
  {
    std::cout << "\n=== Could not execute: RobotomyRequestForm ==="
              << std::endl;
    Bureaucrat b("b1", 80);
    Bureaucrat c("b2", 40);
    // sign=72, exec=42
    RobotomyRequestForm r("r1");
    b.signForm(r);
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << r << std::endl;
    c.executeForm(r);
  }
  {
    std::cout << "\n=== Could not execute: PresidentPardonForm ==="
              << std::endl;
    Bureaucrat b("b1", 60);
    Bureaucrat c("b2", 1);
    // sign=25, exec=5
    PresidentPardonForm p("p1");
    b.signForm(p);
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << p << std::endl;
    c.executeForm(p);
  }
  {
    std::cout << "\n=== Could not execute: ShrubberyCreationForm ==="
              << std::endl;
    Bureaucrat b("b1", 150);
    Bureaucrat c("b2", 1);
    // sign=145, exec=137
    ShrubberyCreationForm s("s1");
    b.signForm(s);
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << s << std::endl;
    c.executeForm(s);
  }
}
