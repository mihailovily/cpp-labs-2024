#include "Televizor.h"
#include <iostream>

Televizor::Televizor(const std::string& name, double price, int screenSize)
    : Tovar(name, price), screenSize(screenSize) {}

void Televizor::display() const {
    Tovar::display(); // Вызываем метод базового класса
    std::cout << "Размер экрана: " << screenSize << " дюймов" << std::endl;
}

void Televizor::setScreenSize(int size) {
    screenSize = size;
}
