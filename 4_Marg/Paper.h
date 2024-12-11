#ifndef PAPER_H
#define PAPER_H

#include "Cancsubg.h"
#include <iostream>

class Paper : public Cancsubg {
private:
    std::string format;

public:
    Paper(const std::string &name, double price, const std::string &firma, const std::string &format);
    void display() const override;
    std::string getFormat() const;
    void setFormat(const std::string& color);
};

#endif // PAPER_H