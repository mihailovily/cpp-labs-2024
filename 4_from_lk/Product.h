// Product.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product {
protected:
    std::string name;
    double price;

public:
    Product(const std::string& name, double price) : name(name), price(price) {}
    virtual ~Product() {}

    virtual void display() const {
        std::cout << "Product: " << name << ", Price: " << price << std::endl;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }

    double getPrice() const {
        return price;
    }
};

#endif
