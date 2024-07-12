#include <iostream>
using namespace std;

int main() {
    int menuChoice;
    double totalPrice, vat;

    cout << "لطفا منوی غذا را انتخاب کنید (1-5): ";
    cin >> menuChoice;

    switch(menuChoice) {
        case 1:
            totalPrice = 10.0;
            break;
        case 2:
            totalPrice = 15.0;
            break;
        case 3:
            totalPrice = 20.0;
            break;
        case 4:
            totalPrice = 25.0;
            break;
        case 5:
            totalPrice = 30.0;
            break;
        default:
            cout << "انتخاب نامعتبر!" << endl;
            return -1;
    }

    vat = totalPrice * 0.09;
    cout << "قیمت کل: " << totalPrice << endl;
    cout << "مالیات بر ارزش افزوده: " << vat << endl;

    return 0;
}