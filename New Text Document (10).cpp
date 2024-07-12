#include <iostream>
using namespace std;

int main() {
    char inputChar;
    
    cout << "Enter a character: ";
    cin >> inputChar;
    
    if (inputChar >= '0' && inputChar <= '9') {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is not a digit." << endl;
    }
    
    return 0;
}