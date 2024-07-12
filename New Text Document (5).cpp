#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    std::string model;
    int distance;

    void drive(int km) {
        distance += km;
    }

    void showData() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Distance driven: " << distance << "km." << std::endl;
    }
};

int main() {
    Car myCar;
    
    // Get input from user
    std::cout << "Enter car brand: ";
    std::cin >> myCar.brand;

    std::cout << "Enter car model: ";
    std::cin >> myCar.model;

    // Initialize distance to 0
    myCar.distance = 0;

    // Drive the car
    myCar.drive(100);

    // Display car data
    myCar.showData();

    return 0;
}