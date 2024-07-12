#include <iostream>
#include <string>

int main() {
    std::string password = "1234";
    std::string input;

    do {
        std::cout << "لطفا رمز را وارد کنید: ";
        std::cin >> input;

        if (input != password) {
            std::cout << "رمز اشتباه است. دوباره تلاش کنید." << std::endl;
        }
    } while (input != password);

    std::cout << "رمز صحیح وارد شد. دسترسی فعال شد." << std::endl;

    return 0;
}