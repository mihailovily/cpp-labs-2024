#ifndef TOVAR_H
#define TOVAR_H

#include <string>

class Tovar {
protected:
    std::string name;
    double price;

public:
    Tovar(const std::string& name, double price);
    
    virtual ~Tovar() {}

    virtual void display() const; // Виртуальная функция для отображения
    double getPrice() const; // Метод для получения цены
};

#endif // TOVAR_H
