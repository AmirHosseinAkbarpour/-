#include <iostream>
#include <string>

class Dog {
private:
    std::string name;
    int birthYear;
    int age;
    int score;

public:
    Dog(std::string dogName, int year) : name(dogName), birthYear(year), age(2021 - year), score(0) {}

    void bark() {
        std::cout << "Woof! Woof!" << std::endl;
    }

    void learn() {
        score++;
        std::cout << "Dog's score increased to: " << score << std::endl;
    }

    void displayInfo() {
        std::cout << "Dog's Name: " << name << std::endl;
        std::cout << "Dog's Age: " << age << " years" << std::endl;
        std::cout << "Dog's Score: " << score << std::endl;
    }
};

int main() {
    std::string dogName;
    int birthYear;

    // Create a dog object
    std::cout << "Enter the dog's name: ";
    std::cin >> dogName;
    
    std::cout << "Enter the dog's birth year: ";
    std::cin >> birthYear;

    Dog myDog(dogName, birthYear);

    int action = 1;

    while (action != 0) {
        // Perform actions based on user input
        if (action == 1) {
            myDog.bark();
        } else if (action == 2) {
            myDog.learn();
        }

        // Get next action input
        std::cout << "\nEnter action (1 - Bark, 2 - Learn, 0 - Exit): ";
        std::cin >> action;
        
        if (action == 0) {
            myDog.displayInfo();
        }
        
     }

     return 0;
}