#include "Holodilnik.h"
#include <iostream>

Holodilnik::Holodilnik(const std::string& name, double price, int volume)
    : Tovar(name, price), volume(volume) {}

void Holodilnik::display() const {
    Tovar::display(); // Вызываем метод базового класса
    std::cout << "Объем: " << volume << " литров" << std::endl;
}

void Holodilnik::setVolume(int vol) {
    volume = vol;
}
