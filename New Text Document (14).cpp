#include <iostream>
#include <climits>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int num, smallest = INT_MAX, largest = INT_MIN;

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> num;

        if (num < smallest) {
            smallest = num;
        }

        if (num > largest) {
            largest = num;
        }
    }

    std::cout << "Smallest number is: " << smallest << std::endl;
    std::cout << "Largest number is: " << largest << std::endl;

    return 0;
}