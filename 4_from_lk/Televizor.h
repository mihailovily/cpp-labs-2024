#ifndef TELEVIZOR_H
#define TELEVIZOR_H

#include "Tovar.h"

class Televizor : public Tovar {
private:
    int screenSize; // Размер экрана

public:
    Televizor(const std::string& name, double price, int screenSize);
    
    void display() const override; // Переопределяем виртуальную функцию
    void setScreenSize(int size); // Метод для изменения размера экрана
};

#endif // TELEVIZOR_H
