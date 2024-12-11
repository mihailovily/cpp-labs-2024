#include "Cancsubg.h"
#include <iostream>

Cancsubg::Cancsubg(const std::string& name, double price, const std::string& firma)
    : name(name), price(price), firma(firma) {
    if (name.empty()) {
        std::cerr << "Error: Namecannot be empty." << std::endl;
    }
}

void Cancsubg::display() const {
    std::cout << "Название: " << name << ", Цена: " << price << ", Firma: " << firma << std::endl;
}

void Cancsubg::setFirma(const std::string& newFirma) {
    firma = newFirma;
} 

// доп метод для получения названия товара
std::string Cancsubg::getName() const {
    return name;
}

std::string Cancsubg::getFirma() const {
    return firma;
}

