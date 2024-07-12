#include <iostream>

int main() {
    int hour;
    
    std::cout << "Enter the hour (0 to 23): ";
    std::cin >> hour;
    
    if (hour >= 0 && hour <= 11) {
        std::cout << "AM" << std::endl;
    } else if (hour >= 12 && hour <= 23) {
        std::cout << "PM" << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a number between 0 and 23." << std::endl;
    }
    
    return 0;
}