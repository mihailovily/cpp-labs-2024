#ifndef CANCSUBG_H
#define CANCSUBG_H

#include <string>
#include<iostream>

class Cancsubg {
protected:
    std::string name; // Сделали фирму константой
    double price;
    std::string firma;

public:
    Cancsubg(const std::string& name, double price, const std::string& firma);
    virtual ~Cancsubg() {}
    virtual void display() const;
    double getPrice() const;
    std::string getName() const;
    std::string getFirma() const;
    void setFirma(const std::string& Firma);
};

#endif // CANCSUBG_H