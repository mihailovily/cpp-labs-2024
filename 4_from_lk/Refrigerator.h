// Refrigerator.h
#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include "Product.h"

class Refrigerator : public Product {
private:
    double volume; // Объем в литрах

public:
    Refrigerator(const std::string& name, double price, double volume) 
        : Product(name, price), volume(volume) {}

    void display() const override {
        Product::display();
        std::cout << "Volume: " << volume << " liters" << std::endl;
    }

    void setVolume(double newVolume) {
        volume = newVolume;
    }
};

#endif
