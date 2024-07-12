#include <iostream>
using namespace std;

int main() {
    int fuelLevel, consumptionRate, remainingDistance;

    cout << "Enter the fuel level of the car: ";
    cin >> fuelLevel;

    cout << "Enter the fuel consumption rate (in liters per 100 km): ";
    cin >> consumptionRate;

    remainingDistance = fuelLevel * 100 / consumptionRate;

    if (remainingDistance >= 100) {
        cout << "You can travel " << remainingDistance << " kilometers.\n";
    } else {
        cout << "Warning: Low fuel! Remaining distance is less than 100 kilometers.\n";
    }

    return 0;
}