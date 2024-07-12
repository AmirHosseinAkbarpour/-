#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string phoneNumber;
    cout << "Enter a mobile phone number: ";
    cin >> phoneNumber;

    // Regular expression to validate mobile phone number
    regex pattern("[0-9]{11}");

    if (regex_match(phoneNumber, pattern)) {
        cout << "Valid mobile phone number." << endl;
    } else {
        cout << "Invalid mobile phone number." << endl;
    }

    return 0;
}