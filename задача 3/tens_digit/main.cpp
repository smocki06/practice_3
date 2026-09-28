#include <iostream>
#include "digits.h"

int main() {
    unsigned long long n;
    std::cout << "Введите неотрицательное целое число: ";
    std::cin >> n;

    std::cout << "Число десятков: " << tensDigit(n) << "\n";

    return 0;
}