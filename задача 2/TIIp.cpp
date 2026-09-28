//2

//#include <iostream>
//
//// Модуль: вычисление позиции на кольце
//int positionOnRing(int v, int t, int length) {
//    long long distance = 1LL * v * t;
//    int pos = (int)(distance % length);
//    if (pos < 0) pos += length;
//    return pos;
//}

//int main() {
//    int v, t;
//    const int LENGTH = 109;
//    std::cout << "Введите скорость (км/ч) и время (ч): ";
//    std::cin >> v >> t;
//    std::cout << "Отметка: " << positionOnRing(v, t, LENGTH) << " км\n";
//    return 0;
//}

//#include <iostream>
//
//int main() {
//    const int LENGTH = 109;
//    int v, t;
//
//    std::cout << "Введите скорость (км/ч) и время (ч): ";
//    std::cin >> v >> t;
//
//    long long distance = 1LL * v * t;   // пройденный путь
//    int pos = distance % LENGTH;        // остаток от деления
//    if (pos < 0) pos += LENGTH;         // корректировка для отрицательных
//
//    std::cout << "Отметка: " << pos << " км\n";
//    return 0;
//}

//#include <iostream>
//
//class Biker {
//public:
//    Biker(int startKm, int roadLength)
//        : position_(startKm), roadLength_(roadLength) {}
//
//    // Движение с заданной скоростью в течение t часов
//    void ride(int speed, int hours) {
//        long long distance = 1LL * speed * hours;
//        long long newPos = (position_ + distance) % roadLength_;
//        if (newPos < 0) newPos += roadLength_;
//        position_ = static_cast<int>(newPos);
//    }
//
//    int position() const { return position_; }
//
//private:
//    int position_;
//    int roadLength_;
//};
//
//int main() {
//    const int MKAD_LENGTH = 109;
//
//    Biker vasya(0, MKAD_LENGTH);   // стартует с 0-го км
//
//    int v, t;
//    std::cout << "Введите скорость (км/ч) и время (ч): ";
//    std::cin >> v >> t;
//
//    vasya.ride(v, t);
//    std::cout << "Вася остановится на отметке: "
//        << vasya.position() << " км\n";
//    return 0;
//}
