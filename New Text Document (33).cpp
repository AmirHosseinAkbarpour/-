#include <iostream>
#include <regex>

int main() {
    std::string phoneNumber;
    std::cout << "Enter a mobile phone number: ";
    std::cin >> phoneNumber;

    // Regular expression to match a mobile phone number
    std::regex pattern("(\\+98|0)?9\\d{9}");

    if (std::regex_match(phoneNumber, pattern)) {
        std::cout << "Valid mobile phone number." << std::endl;
    } else {
        std::cout << "Invalid mobile phone number." << std::endl;
    }

    return 0;
}