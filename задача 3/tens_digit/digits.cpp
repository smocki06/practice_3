#include "digits.h"

int digitAt(unsigned long long n, int position) {
    unsigned long long divisor = 1;
    for (int i = 0; i < position; ++i) {
        divisor *= 10;
    }
    return static_cast<int>((n / divisor) % 10);
}

int tensDigit(unsigned long long n) {
    return digitAt(n, 1);
}