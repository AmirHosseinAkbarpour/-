#include <iostream>
using namespace std;

void reverseNumber(int num) {
    if(num < 10) {
        cout << num;
        return;
    }
    
    cout << num % 10;
    reverseNumber(num / 10);
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    
    cout << "Reversed number: ";
    reverseNumber(number);
    
    return 0;
}