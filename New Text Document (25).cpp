#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;

    double a = (y2 - y1) / (x2 - x1);
    double b = y1 - a * x1;

    cout << "The equation of the line passing through (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: ";
    
    if(b >= 0)
        cout << "y = " << a << "x + " << b;
    else
        cout << "y = " << a << "x - " << -b;

    return 0;
}