#include <iostream>
using namespace std;
class Abonent
{
private:
    string surname = "Empty";
    int minutes;
    int price;
    float payment;

public:
    Abonent(string s = "Noname", int m = 0, int pr = 0); // объявляем конструктор
    // Объявляем три функции для чтения полей:
    string GetSurname();
    int GetMinutes();
    int GetPrice();
    float GetPayment();
    void SetSurname();
};

Abonent::Abonent(string h, int m, int pr)
{
    surname = h;
    minutes = m;
    price = pr;
    payment = minutes * price;
}

string Abonent::GetSurname()
{
    return surname;
}

int Abonent::GetMinutes()
{
    return minutes;
}

int Abonent::GetPrice()
{
    return price;
}

float Abonent::GetPayment()
{
    return payment;
}

void Abonent::SetSurname(){
    string new_s;
    cin >> new_s;
    this->surname = new_s;

}

int main()
{
    Abonent Ivan("Petrov", 30, 5);
    cout << Ivan.GetSurname() << endl; // создание объекта с помощью конструктора с параметрами
    Abonent Noname; // создание объекта с помощью конструктора по умолчанию
    cout << Noname.GetSurname() << endl;
    Ivan.SetSurname(); //редактирование и просмотр свойств каждого объекта (можно однократное)
    cout << Ivan.GetSurname();
    cout << Ivan.GetPayment(); //обработка массива объектов в соответствии с заданием лабораторной работы 1
}