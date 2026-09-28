#include "mkad.h"

int positionOnMkad(int speed, int hours) {
    // Пройденный путь. Используем long long, чтобы избежать
    // переполнения при больших speed * hours.
    long long distance = 1LL * speed * hours;

    // Остаток от деления на длину кольца.
    // В C++ остаток для отрицательного делимого тоже отрицательный,
    // поэтому после этого шага результат может лежать в (-109; 109).
    int pos = static_cast<int>(distance % MKAD_LENGTH);

    // Приводим к диапазону [0; MKAD_LENGTH).
    if (pos < 0) {
        pos += MKAD_LENGTH;
    }
    return pos;
}