#include <iostream>
#include <string>

using namespace std;

struct Car {
    string brand;
    string model;
    int distance;
};

void drive(Car &car, int km) {
    car.distance += km;
}

void showData(const Car &car) {
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl;
    cout << "Distance driven: " << car.distance << "km." << endl;
}

int main() {
    Car myCar;
    
    cout << "Enter brand of the car: ";
    cin >> myCar.brand;

    cout << "Enter model of the car: ";
    cin >> myCar.model;

    cout << "Enter initial distance driven (in km): ";
    cin >> myCar.distance;

    // Drive the car
    int additionalKm;
    cout << "Enter additional distance to drive (in km): ";
    cin >> additionalKm;
    
    drive(myCar, additionalKm);

    // Display car data
    showData(myCar);

   return 0;
}