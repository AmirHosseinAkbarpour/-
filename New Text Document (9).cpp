#include <iostream>

// تابع برای انجام عملیات ریاضی
float calculate(float num1, float num2, char op) {
    switch(op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if(num2 != 0)
                return num1 / num2;
            else {
                std::cout << "Error: Division by zero!" << std::endl;
                return 0;
            }
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            return 0;
    }
}

int main() {
    float number1, number2, result;
    char operation;

    // ورود اعداد و عملگر
    std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    // فراخوانی تابع برای محاسبه
    result = calculate(number1, number2, operation);

    // نمایش نتیجه
    std::cout << "Result: " << result << std::endl;

    return 0;
}