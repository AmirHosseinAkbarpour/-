#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string email;
    std::cout << "Enter your email address: ";
    std::cin >> email;

    // Regular expression for basic email validation
    std::regex pattern("[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}");

    if (std::regex_match(email, pattern)) {
        std::cout << "Valid email address." << std::endl;
    } else {
        std::cout << "Invalid email address." << std::endl;
    }

    return 0;
}