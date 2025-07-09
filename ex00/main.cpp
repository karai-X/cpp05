#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    std::cout << "=== No error ===" << std::endl;
    try {
        Bureaucrat b1("A", 10);
        std::cout << b1 << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n== Grade is 0 ===" << std::endl;
    try {
        Bureaucrat b2("B", 0);  // 無効（高すぎる）
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Grade is 151 ===" << std::endl;
    try {
        Bureaucrat b3("C", 151);  // 無効（低すぎる）
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test for increment ===" << std::endl;
    try {
        Bureaucrat a("D", 149);
        a.increment();
		std::cout << a << std::endl;
		a.increment();
        std::cout << "Not Reached Here" << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test for decrement ===" << std::endl;
    try {
      Bureaucrat a("E", 2);
      a.decrement();
      std::cout << a << std::endl;
      a.decrement();
      std::cout << "Not Reached Here" << std::endl;
    } catch (const std::exception &e) {
      std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
