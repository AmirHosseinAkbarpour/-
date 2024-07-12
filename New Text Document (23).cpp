#include <iostream>

int main() {
    int num;
    
    std::cout << "لطفا یک عدد بین ۰ تا ۱۰ وارد کنید: ";
    std::cin >> num;
    
    if (num >= 0 && num <= 10) {
        if (num % 2 == 0) {
            if (num < 5)
                std::cout << "عدد زوج و کمتر از ۵ است." << std::endl;
            else
                std::cout << "عدد زوج و بیشتر از ۵ است." << std::endl;
        } else {
            std::cout << "عدد فرد است." << std::endl;
        }
    } else {
        std::cout << "ورودی نامعتبر. لطفا عدد صحیح بین ۰ تا ۱۰ وارد کنید." << std::endl;
    }
    
    return 0;
}