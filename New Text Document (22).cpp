#include <iostream>
using namespace std;

int main() {
    float average;
    char grade;

    cout << "Enter the average: ";
    cin >> average;

    if (average >= 17 && average <= 20) {
        grade = 'A';
    } else if (average >= 14 && average < 17) {
        grade = 'B';
    } else if (average >= 10 && average < 14) {
        grade = 'C';
    } else if (average >= 0 && average < 10) {
        grade = 'D';
    }

    cout << "Grade: " << grade << endl;

    if (grade == 'D') {
        cout << "The person is conditional." << endl;
    } else {
        cout << "The person is not conditional." << endl;
    }

    return 0;
}