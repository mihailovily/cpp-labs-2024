#include "Avtopen.h"
#include <iostream>

Avtopen::Avtopen(const std::string& name, double price, const std::string& firma,
                 const std::string& inkColor)
    : Cancsubg(name, price, firma), inkColor(inkColor) {}

void Avtopen::display() const {
    std::cout << "Name: " << name << ", Price: " << price << ", Firma: " << firma << ", Color: " << inkColor << std::endl;
}

void Avtopen::setInkColor(const std::string& NewColor) {
    inkColor = NewColor;
} 

std::string Avtopen::getInkColor() const {
    return inkColor;
}