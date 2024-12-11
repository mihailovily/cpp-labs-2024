#include "Paper.h"
#include <iostream>

Paper::Paper(const std::string& name, double price, const std::string& firma,
                 const std::string& format)
    : Cancsubg(name, price, firma), format(format) {}

void Paper::display() const {
    std::cout << "Name: " << name << ", Price: " << price << ", Firma: " << firma << ", Format: " << format << std::endl;
}

void Paper::setFormat(const std::string& newFormat) {
    format = newFormat;
} 

std::string Paper::getFormat() const {
    return format;
}