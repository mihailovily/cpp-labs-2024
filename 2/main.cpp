class Abonent {
private:
    string surname;
    int minutes;
    int price;

public:
    Abonent(string h, int m, int s);  // объявляем конструктор

    // Объявляем три функции для чтения полей:
    string GetHours();
    int GetMinutes() const;
    int GetSeconds() const;
};


Abonent::Abonent(string h, int m, int s) {
    if (s < 0 || s > 59) {
        // обрабатываем ошибочные секунды
    }
    if (m < 0 || m > 59) {
        // обрабатываем ошибочные минуты
    }
    if (h < 0 || h > 23) {
        // обрабатываем ошибочные часы
    }
    surname = h;
    minutes = m;
    seconds = s;
}

int Abonent::GetHours() const {
    return hours;
}

int Abonent::GetMinutes() const {
    return minutes;
}

int Abonent::GetSeconds() const {
    return seconds;
}

#include <iostream>

int main() {
    Time t(13, 30, 0);  // 13:30:00
    std::cout << t.GetMinutes() << "\n";  // 13
}