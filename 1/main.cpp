#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

struct Abonent
{
    std::string surname;
    int duration;           // Продолжительность разговора в мин.
    double cost_per_minute; // Стоимость минуты разговора
};

void readData(Abonent *&abonents, int &count, const std::string &filename)
{
    std::ifstream file(filename);
    count = 0;
    abonents = new Abonent[5]; // количество строк 5

    while (count < 5)
    {
        file >> abonents[count].surname >> abonents[count].duration >> abonents[count].cost_per_minute;
        count++;
    }
    file.close();
}

void displayData(const Abonent *abonents, int count)
{
    std::cout << std::endl;
    for (int i = 0; i < count; ++i)
    {
        std::cout << i + 1 << "    " << abonents[i].surname << "   "
                  << abonents[i].duration << "   "
                  << abonents[i].cost_per_minute << std::endl;
    }
    std::cout << std::endl;
}

void editData(Abonent *abonents, int count)
{
    int index;
    std::cout << "Введите номер строки для редактирования (1-" << count << "): ";
    std::cin >> index;
    int toEdit;
    index = index - 1;
    if (index < 0 || index >= count)
    {
        std::cout << "Неверный номер строки!" << std::endl;
        return;
    }
    std::cout << "Что редактируем?\n1 - Фамилия\n2 - Продолжительность\n3 - Стоимость\n4 - Все и сразу" << std::endl;
    std::cin >> toEdit;
    switch (toEdit)
    {
    case 1:
        std::cout << "Введите новую фамилию: ";
        std::cin >> abonents[index].surname;
        break;
    
    case 2:
        std::cout << "Введите новую продолжительность: ";
        std::cin >> abonents[index].duration;
        break;
    
    case 3:
        std::cout << "Введите новую стоимость: ";
        std::cin >> abonents[index].cost_per_minute;
        break;

    case 4:
        std::cout << "Введите все и сразу: ";
        std::cin >> abonents[index].surname >> abonents[index].duration >> abonents[index].cost_per_minute;
        break;
    default:
        std::cout << "Ошибка" << std::endl;
        break;
    }
}

double Total(const Abonent *abonents, int count)
{
    double total = 0.0;
    for (int i = 0; i < count; ++i)
    {
        total += abonents[i].duration * abonents[i].cost_per_minute;
    }
    return total;
}

void saveData(const Abonent *abonents, int count, const std::string &filename)
{
    std::ofstream file(filename);
    if (!file)
    {
        std::cerr << "Ошибка открытия файла для записи!" << std::endl;
        return;
    }

    for (int i = 0; i < count; ++i)
    {
        file << abonents[i].surname << " "
             << abonents[i].duration << " "
             << abonents[i].cost_per_minute << std::endl;
    }
    file.close();
}

int main()
{
    Abonent *abonents = nullptr;
    int count = 0;
    std::string outputFilename;
    readData(abonents, count, "table.txt");
    char choice;
    do
    {
        std::cout << "1 - просмотреть\n"
                  << "2 - редактировать\n"
                  << "3 - сохранить\n"
                  << "0 - выход"
                  << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case '1':
            displayData(abonents, count);
            break;
        case '2':
            editData(abonents, count);
            break;
        case '3':
            std::cout << "Введите имя файла для сохранения данных: ";
            std::cin >> outputFilename;
            saveData(abonents, count, outputFilename);
            break;
        case '0':
            choice = '0';
            break;
        default:
            std::cout << "Команда не распознана" << std::endl;
        }
    } while (choice != '0');
    std::cout << "Общая стоимость всех разговоров: " << Total(abonents, count) << std::endl;
    delete[] abonents;
    return 0;
}