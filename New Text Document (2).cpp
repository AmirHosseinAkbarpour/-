#include <iostream>
using namespace std;

const float VAT = 0.09;

struct Food {
    int code;
    string name;
    float price;
};

int main() {
    Food foods[] = {{1, "Pizza", 10.99}, {2, "Burger", 5.99}, {3, "Salad", 4.50}};
    Food drinks[] = {{1, "Cola", 1.99}, {2, "Coffee", 2.50}, {3, "Tea", 1.50}};
    Food starters[] = {{1, "Garlic Bread", 3.99}, {2, "Soup", 2.99}, {3, "Bruschetta", 4.25}};

    int foodCode, drinkCode, starterCode;
    cout << "Enter food code: ";
    cin >> foodCode;
    cout << "Enter drink code: ";
    cin >> drinkCode;
    cout << "Enter starter code: ";
    cin >> starterCode;

    float total = foods[foodCode - 1].price + drinks[drinkCode - 1].price + starters[starterCode - 1].price;
    
    float vatAmount = total * VAT;
    
    cout << "Total amount with VAT: $" << total + vatAmount << endl;

    return 0;
}