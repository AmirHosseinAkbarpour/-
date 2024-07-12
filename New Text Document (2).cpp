#include <iostream>
using namespace std;

int main() {
    const int SIZE = 9;
    int input, count[SIZE] = {0};

    while (true) {
        cin >> input;
        if (input == 0) break;
        if (input >= 1 && input <= 9) {
            count[input - 1]++;
        }
    }

    int maxCount = count[0], minCount = count[0], maxNum = 1, minNum = 1;

    for (int i = 1; i < SIZE; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxNum = i + 1;
        }
        if (count[i] < minCount && count[i] > 0) {
            minCount = count[i];
            minNum = i + 1;
        }
    }

    cout << "تعداد تکرار هر عدد:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "عدد " << i + 1 << ": " << count[i] << " بار" << endl;
    }

    cout << "بیشترین تکرار: عدد " << maxNum << " با تعداد " << maxCount << endl;
    cout << "کمترین تکرار: عدد " << minNum << " با تعداد " << minCount << endl;

    return 0;
}