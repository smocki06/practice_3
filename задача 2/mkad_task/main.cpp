#include <iostream>
#include "mkad.h"

int main() {
    int v, t;

    std::cout << "Введите скорость (км/ч) и время (ч): ";
    std::cin >> v >> t;

    int pos = positionOnMkad(v, t);

    std::cout << "Вася остановится на отметке " << pos << " км МКАД\n";

    return 0;
}