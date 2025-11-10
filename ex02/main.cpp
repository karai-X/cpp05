#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
  std::cout << "=== No error: RobotomyRequestForm ===" << std::endl;
  Bureaucrat b("b1", 90);
  // sign=72, exec=42
  RobotomyRequestForm r("r1");
  b.signForm(r);
  std::cout << b << std::endl;
  std::cout << r << std::endl;
  b.executeForm(r);

//   std::cout << "\n== Bureaucrat Grade is lower than required grade for sign ==="
//             << std::endl;
//   Bureaucrat b2("B", 90);
//   Form f2("f2", 100, 180);
//   std::cout << b2 << std::endl;
//   std::cout << f2 << std::endl;
//   try {
//     b2.signForm(f2);
//   } catch (const std::exception &e) {
//     std::cerr << "(Not Reached here) because signForm() returns void" << e.what() << std::endl;
//   }
}
