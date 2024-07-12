#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    int length = password.length();
    int complexity = 0;

    if (length >= 6) complexity += 20;
    
    for (char c : password) {
        if (isdigit(c)) {
            complexity += 20;
            break;
        }
    }

    for (char c : password) {
        if (!isalnum(c)) {
            complexity += 20;
            break;
        }
    }

    for (char c : password) {
        if (isupper(c)) {
            complexity += 20;
            break;
        }
    }

    for (char c : password) {
        if (islower(c)) {
            complexity += 20;
            break;
        }
    }

    cout << "Password strength: " << complexity << "%" << endl;

    return 0;
}