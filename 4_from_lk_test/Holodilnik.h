#ifndef HOLADILNIK_H
#define HOLADILNIK_H

#include "Tovar.h"

class Holodilnik : public Tovar {
private:
    int volume; // Объем в литрах

public:
    Holodilnik(const std::string& name, double price, int volume);
    
    void display() const override; // Переопределяем виртуальную функцию
    void setVolume(int vol); // Метод для изменения объема
};

#endif // HOLADILNIK_H
