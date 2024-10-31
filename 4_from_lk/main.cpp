// main.cpp
#include <iostream>
#include <vector>
#include "Television.h"
#include "Refrigerator.h"

void showMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Display Products\n";
    std::cout << "2. Modify Product Price\n";
    std::cout << "3. Calculate Average Price\n";
    std::cout << "4. Exit\n";
}

double calculateAveragePrice(const std::vector<Product*>& products) {
    double total = 0;
    for (const auto& product : products) {
        total += product->getPrice();
    }
    return total / products.size();
}

int main() {
    std::vector<Product*> products;
    products.push_back(new Television("Samsung", 500.0, 55));
    products.push_back(new Refrigerator("LG", 800.0, 300));
    
    int choice;
    do {
        showMenu();
        std::cin >> choice;
        
        switch (choice) {
            case 1: {
                for (const auto& product : products) {
                    product->display();
                }
                break;
            }
            case 2: {
                int index;
                double newPrice;
                std::cout << "Enter product index to modify (0 for TV, 1 for Fridge): ";
                std::cin >> index;
                std::cout << "Enter new price: ";
                std::cin >> newPrice;
                if (index >= 0 && index < products.size()) {
                    products[index]->setPrice(newPrice);
                }
                break;
            }
            case 3: {
                std::cout << "Average Price: " << calculateAveragePrice(products) << std::endl;
                break;
            }
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    
    for (auto product : products) {
        delete product;
    }

    return 0;
}
