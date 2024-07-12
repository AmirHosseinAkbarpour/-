#include <iostream>

int main() {
    double n1, n2, n3, w1, w2, w3;
    double weighted_average;

    // ورودی نمرات و وزن‌ها
    std::cout << "Enter grade 1 and its weight: ";
    std::cin >> n1 >> w1;

    std::cout << "Enter grade 2 and its weight: ";
    std::cin >> n2 >> w2;

    std::cout << "Enter grade 3 and its weight: ";
    std::cin >> n3 >> w3;

    // محاسبه معدل وزنی
    weighted_average = (n1  w1 + n2  w2 + n3 * w3) / (w1 + w2 + w3);

    // چاپ معدل وزنی
    std::cout << "Weighted Average: " << weighted_average << std::endl;

    return 0;
}