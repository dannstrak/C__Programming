//
// Created by Alejandro on 27/9/2026.
//

#include <iostream>

int readNumber ()
{
    int number {};
    std::cin >> number;
    return number;
}
void writeAnswer (int answer)
{
    std::cout << "El valor insertado es: "<<answer << std::endl;
}

int main () {
    int x {};
    int y {};
    x = readNumber();
    y = readNumber();
    writeAnswer(x+y);
    return  0;
}