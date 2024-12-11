#ifndef AVTOPEN_H
#define AVTOPEN_H

#include "Cancsubg.h"

class Avtopen : public Cancsubg {
private:
    std::string inkColor;  // Цвет чернил

public:
    Avtopen(const std::string &name, double price, const std::string &firma, const std::string &inkColor);
    void display() const override;
    std::string getInkColor() const;
    void setInkColor(const std::string& color);
};

#endif // AVTOPEN_H