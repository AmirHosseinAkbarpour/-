#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int choice, num;
    
    cout << "Enter your choice:\n";
    cout << "1. Power\n2. Factorial\n3. Fibonacci\n";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter base and exponent: ";
            cin >> num;
            int exp;
            cin >> exp;
            cout << "Result: " << power(num, exp) << endl;
            break;
            
        case 2:
            cout << "Enter a number: ";
            cin >> num;
            cout << "Result: " << factorial(num) << endl;
            break;

        case 3:
            cout << "Enter a number: ";
            cin >> num;
            cout << "Result: " << fibonacci(num) << endl;
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}