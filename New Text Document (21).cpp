#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4, num5;
    
    cout << "Enter five numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Calculate average
    double average = (num1 + num2 + num3 + num4 + num5) / 5;
    cout << "Average: " << average << endl;

    // Find the largest number
    double maxNum = max(max(max(num1, num2), max(num3, num4)),num5);
    cout << "Largest number: " << maxNum << endl;

    // Find the smallest number
    double minNum = min(min(min(num1, num2), min(num3, num4)),num5);
    cout << "Smallest number: " << minNum << endl;

    return 0;
}