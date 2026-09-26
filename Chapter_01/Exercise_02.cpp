//
// Created by Alejandro on 26/9/2026.
//
#include <iostream>

int getValueFromUser() {
    std::cout << "Enter a number: ";
    int number{};
    std::cin >> number;
    return number;
}
int main () {
    std::cout << "El valor proporcionado por el usuario es: "<< getValueFromUser()<< std::endl;
    return 0;
}