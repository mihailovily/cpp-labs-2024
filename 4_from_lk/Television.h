// Television.h
#ifndef TELEVISION_H
#define TELEVISION_H

#include "Product.h"

class Television : public Product {
private:
    int screenSize; // Размер экрана в дюймах

public:
    Television(const std::string& name, double price, int screenSize) 
        : Product(name, price), screenSize(screenSize) {}

    void display() const override {
        Product::display();
        std::cout << "Screen Size: " << screenSize << " inches" << std::endl;
    }

    void setScreenSize(int newSize) {
        screenSize = newSize;
    }
};

#endif
