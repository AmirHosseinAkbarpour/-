#include <iostream>
using namespace std;

const float PI = 3.14159;

float calculateArea(float radius) {
    return PI  radius  radius;
}

float calculatePerimeter(float radius) {
    return 2  PI  radius;
}

int main() {
    float radius;
    
    cout << "لطفا شعاع دایره را وارد کنید: ";
    cin >> radius;
    
    cout << "مساحت دایره: " << calculateArea(radius) << endl;
    cout << "محیط دایره: " << calculatePerimeter(radius) << endl;
    
    return 0;
}