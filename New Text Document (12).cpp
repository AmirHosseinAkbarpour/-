#include <iostream>
using namespace std;

int main() {
    int num;
    char ch;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter a character: ";
    cin >> ch;

    for (int i = 0; i < num; i++) {
        cout << ch;
    }

    return 0;
}