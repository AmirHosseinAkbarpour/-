#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;
    int positiveCount = 0, negativeCount = 0;
    double sum = 0, average;

    cout << "Enter three numbers: ";
    cin >> a1 >> a2 >> a3;

    if (a1 > 0) positiveCount++;
    else if (a1 < 0) negativeCount++;
    sum += a1;

    if (a2 > 0) positiveCount++;
    else if (a2 < 0) negativeCount++;
    sum += a2;

    if (a3 > 0) positiveCount++;
    else if (a3 < 0) negativeCount++;
    sum += a3;

    average = sum / 3.0;

    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;
    cout << "Average: " << average << endl;

    return 0;
}