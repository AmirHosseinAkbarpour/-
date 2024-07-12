#include <iostream>

template <typename T>
int inRange(T x, T low, T high) {
    if (x > low && x < high)
        return 0;
    else if (x >= high)
        return 1;
    else
        return -1;
}

int main() {
    int result1 = inRange(5, 2, 8); // Should return 0
    int result2 = inRange('c', 'a', 'f'); // Should return 0
    int result3 = inRange(10, 1, 7); // Should return 1
    int result4 = inRange(-3, -5, -2); // Should return -1

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;
    std::cout << "Result 4: " << result4 << std::endl;

    return 0;
}