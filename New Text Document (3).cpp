#include <iostream>
#include <string>
using namespace std;

int main() {
    string cardNumber;
    cout << "Enter a 16-digit card number: ";
    cin >> cardNumber;

    // Check if the card number is valid (assuming it's a simple length check)
    if (cardNumber.length() == 16) {
        // Determine the bank based on the first few digits (you can expand this logic)
        string bankName;
        if (cardNumber.substr(0, 4) == "1234") {
            bankName = "MELL";
        } else {
            bankName = "Unknown";
        }

        // Print the formatted output
        cout << "CARD:" << cardNumber.substr(0, 4) << "-" << cardNumber.substr(4, 4) << "-" 
             << cardNumber.substr(8, 4) << "-" << cardNumber.substr(12, 4) 
             << ".BANK:" << bankName << endl;
    } else {
        cout << "Invalid card number. Please enter a 16-digit number." << endl;
    }

    return 0;
}