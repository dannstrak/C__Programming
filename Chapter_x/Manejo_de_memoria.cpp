//
// Created by Alejandro on 30/9/2026.
//
#include <iostream>
void intercambiar(int& inta, int& intb) {
    int c = inta;
    inta = intb;
    intb = c;
    std::cout << "x: "<< inta;
    std::cout << "y: "<< intb;
}
void resetarNegativo (int* const value) {
    if (value != nullptr) {
        if (*value < 0) {
            *value = 0;
        }else {
            *value = *value;
        }
    }else {
        std::cout << "Es nulo";
    }
}
int main() {
    int x {-15};
    int& x1 = x;
    int y {42};
    int& y1 = y;
    std::cout << "Direccion de x: "<< &x << std::endl;
    intercambiar(x1, y1);
    resetarNegativo(&x);
    return 0;
}