#include <iostream>
#include <vector>
#include "Cancsubg.h"
#include "Paper.h"
#include "Avtopen.h"

void displayMenu() {
    std::cout << "1. Show products\n";
    std::cout << "2. Change product's company\n";
    std::cout << "3. Show the number of products of a specified company\n";
    std::cout << "4. Exit\n";
}

int main() {
    std::vector<Cancsubg*> cancsubgs;
    cancsubgs.push_back(new Paper("Basic", 200, "Svetocopy", "A4"));
    cancsubgs.push_back(new Avtopen("Scholnaya", 20, "BIC", "Blue"));
    
    int choice;
    do {
        displayMenu();
        std::cout << "Enter the number of of action: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                for (const auto& cancsubg : cancsubgs) {
                    cancsubg->display();
                }
                break;

            case 2: {
                int index;
                std::cout << "Enetr the number of tovar to change (0-" << cancsubgs.size()-1 << "): ";
                std::cin >> index;

                if (index < 0 || index >= cancsubgs.size()) {
                    std::cout << "Incorrect index!\n";
                    break;
                }

                if (Avtopen* ap = dynamic_cast<Avtopen*>(cancsubgs[index])) {
                    std::string newFirma;
                    std::cout << "Enter new firma: ";
                    std::cin >> newFirma;
                    ap->setFirma(newFirma);
                } else if (Paper* pap = dynamic_cast<Paper*>(cancsubgs[index])) {
                    std::string newFirma;
                    std::cout << "Enter new firma: ";
                    std::cin >> newFirma;
                    pap->setFirma(newFirma);
                }
                break;
            }

            case 3: {
                std::cout << "Vvedite firmy" << std::endl;
                std::string firmaToSearch;
                std::string fff;
                std::cin >> firmaToSearch;
                for (const auto& cancsubg : cancsubgs) {
                    fff = cancsubg->getFirma();
                    if (fff == firmaToSearch){
                        cancsubg->display();
                    }
                }
                break;
            }

            case 4:
                std::cout << "Exit.\n";
                break;

            default:
                std::cout << "Incorrect choice.\n";
                break;
        }

    } while (choice != 4);

    for (auto cancsubg : cancsubgs) {
        delete cancsubg; // Освобождаем память
    }

    return 0;
}