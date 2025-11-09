#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
  std::cout << "=== No error ===" << std::endl;
  Bureaucrat b1("A", 90);
  Form f1("f1", 80, 180);
  std::cout << b1 << std::endl;
  std::cout << f1 << std::endl;
  try {
    b1.signForm(f1);
  } catch (const std::exception &e) {
    std::cerr << "(Not Reached here)" << e.what() << std::endl;
  }

  std::cout << "\n== Bureaucrat Grade is lower than required grade for sign ==="
            << std::endl;
  Bureaucrat b2("B", 90);
  Form f2("f2", 100, 180);
  std::cout << b2 << std::endl;
  std::cout << f2 << std::endl;
  try {
    b2.signForm(f2);
  } catch (const std::exception &e) {
    std::cerr << "(Not Reached here) because signForm() returns void" << e.what() << std::endl;
  }
}
