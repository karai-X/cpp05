#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
  {
    std::cout << "=== Signed ===" << std::endl;
    Form f("form1", 50, 50);
    Bureaucrat b("A", 20);
    b.signForm(f);
  }
  {
    std::cout << "\n=== couldn't sign ===" << std::endl;
    Form f("form2", 50, 50);
    Bureaucrat b("B", 51);
    b.signForm(f);
  }
  {
    std::cout << "\n=== test for form operator << ===" << std::endl;
    Form f("form3", 50, 60);
    std::cout << f << std::endl;
  }
}
