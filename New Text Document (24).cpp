#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter the first number (a): ";
    cin >> a;
    
    cout << "Enter the second number (b): ";
    cin >> b;
    
    // 1.1
    if (a > b) {
        cout << "a is greater than b." << endl;
    } else if (b > a) {
        cout << "b is greater than a." << endl;
    } else {
        cout << "a and b are equal." << endl;
    }
    
    // 1.2
    if (a > 0 && b > 0) {
        cout << "Both numbers are positive." << endl;
    }
    
    // 1.3
    if (a < 0 && b < 0) {
        cout << "Both numbers are negative." << endl;
    }
    
    // 1.4
    if (a == 0 && b == 0) {
        cout << "Both numbers are zero." << endl;
    }
    
     // 1.5
     if(a>0){
         cout<<"Number a is positive"<<endl;
     }else{
         cout<<"Number a is negative"<<endl;
     }

     // 1.6
     if(b>0){
         cout<<"Number b is positive"<<endl;
     }else{
         cout<<"Number b is negative"<<endl;
     }

    
   return 0; 
}