#include <iostream>

int main() {
    int numStars;
    std::cout << "Enter the number of stars: ";
    std::cin >> numStars;

    for (int i = 1; i <= numStars; i++) {
        for (int j = 1; j <= numStars * 2; j++) {
            if (j % numStars == 0) {
                std::cout << ".";
            } else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}