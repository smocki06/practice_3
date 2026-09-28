//3

//#include <iostream>
//
//int main() {
//    int n,result;
//    std::cout << "Введите неотрицательное целое число: ";
//    std::cin >> n;
//    result = (n%10) / 10;
//    std::cout << "Число десятков: " << result << std::endl;
//    return 0;
//}

//
//#include <iostream>
//
//void input(unsigned long long& n) {
//    std::cout << "Введите неотрицательное целое число: ";
//    std::cin >> n;
//}
//
//int tensDigit(unsigned long long n) {
//    return static_cast<int>((n / 10) % 10);
//}
//
//void output(int digit) {
//    std::cout << "Число десятков: " << digit << std::endl;
//}
//
//int main() {
//    unsigned long long n;
//    input(n);
//    int d = tensDigit(n);
//    output(d);
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//class DecimalNumber {
//public:
//    // Конструктор принимает неотрицательное целое число
//    explicit DecimalNumber(unsigned long long value)
//        : value_(value) {}
//
//    // Число десятков — вторая справа цифра
//    int tensDigit() const {
//        return digitAt(1);
//    }
//
//    // Единицы — первая справа цифра (для полноты картины)
//    int unitsDigit() const {
//        return digitAt(0);
//    }
//
//    // Универсальный метод: digitAt(0) — единицы, digitAt(1) — десятки, и т.д.
//    int digitAt(int position) const {
//        unsigned long long divisor = 1;
//        for (int i = 0; i < position; ++i) {
//            divisor *= 10;
//        }
//        return static_cast<int>((value_ / divisor) % 10);
//    }
//
//    // Геттер исходного значения
//    unsigned long long value() const { return value_; }
//
//private:
//    unsigned long long value_;   // инкапсулированные данные
//};
//
//int main() {
//    unsigned long long n;
//    std::cout << "Введите неотрицательное целое число: ";
//    std::cin >> n;
//
//    DecimalNumber number(n);
//
//    std::cout << "Число десятков: " << number.tensDigit() << "\n";
//
//    return 0;
//}
