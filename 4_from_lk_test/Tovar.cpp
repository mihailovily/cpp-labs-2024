#include "Tovar.h"
#include <iostream>

Tovar::Tovar(const std::string& name, double price) : name(name), price(price) {}

void Tovar::display() const {
    std::cout << "Наименование: " << name << ", Цена: " << price << std::endl;
}

double Tovar::getPrice() const {
    return price;
}
