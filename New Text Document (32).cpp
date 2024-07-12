#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    int length = password.length();
    int score = 0;

    if (length >= 6) score += 20;
    
    int numCount = 0, specialCount = 0, upperCount = 0, lowerCount = 0;
    
    for (char c : password) {
        if (isdigit(c)) numCount++;
        else if (!isalnum(c)) specialCount++;
        else if (isupper(c)) upperCount++;
        else if (islower(c)) lowerCount++;
    }

    if (numCount > 0) score += 20;
    if (specialCount > 0) score += 20;
    if (upperCount > 0) score += 20;
    if (lowerCount > 0) score += 20;

    cout << "Password strength: " << score << "%" << endl;

    return 0;
}