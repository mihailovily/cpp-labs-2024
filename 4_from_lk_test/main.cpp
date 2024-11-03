#include <iostream>
#include <vector>
#include "Tovar.h"
#include "Televizor.h"
#include "Holodilnik.h"

void displayMenu() {
    std::cout << "1. Показать товары\n";
    std::cout << "2. Изменить свойства товара\n";
    std::cout << "3. Вычислить среднюю цену\n";
    std::cout << "4. Выход\n";
}

int main() {
    std::vector<Tovar*> tovars;
    tovars.push_back(new Televizor("Samsung", 500.0, 55));
    tovars.push_back(new Holodilnik("LG", 400.0, 300));
    
    int choice;
    do {
        displayMenu();
        std::cout << "Введите номер действия: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                for (const auto& tovar : tovars) {
                    tovar->display();
                }
                break;

            case 2: {
                int index;
                std::cout << "Введите номер товара для изменения (0-" << tovars.size()-1 << "): ";
                std::cin >> index;

                if (index < 0 || index >= tovars.size()) {
                    std::cout << "Неверный индекс!\n";
                    break;
                }

                if (Televizor* tv = dynamic_cast<Televizor*>(tovars[index])) {
                    int newSize;
                    std::cout << "Введите новый размер экрана: ";
                    std::cin >> newSize;
                    tv->setScreenSize(newSize);
                } else if (Holodilnik* fridge = dynamic_cast<Holodilnik*>(tovars[index])) {
                    int newVolume;
                    std::cout << "Введите новый объем: ";
                    std::cin >> newVolume;
                    fridge->setVolume(newVolume);
                }
                break;
            }

            case 3: {
                double total = 0.0;
                for (const auto& tovar : tovars) {
                    total += tovar->getPrice();
                }
                double average = total / tovars.size();
                std::cout << "Средняя цена: " << average << std::endl;
                break;
            }

            case 4:
                std::cout << "Выход из программы.\n";
                break;

            default:
                std::cout << "Неверный выбор, попробуйте снова.\n";
                break;
        }

    } while (choice != 4);

    for (auto tovar : tovars) {
        delete tovar; // Освобождаем память
    }

    return 0;
}
