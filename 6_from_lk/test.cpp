#include <iostream>
#include <random>
using namespace std;

double *generate_massiv(int length)
{
    int i, n;
    n = length;
    double *list = new double[n]; // целевой массив
    for (i = 0; i < n; i++)
    {
        list[i] = rand() % 31;
    }
    return list;
}

void print_massiv(double *massiv, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << massiv[i] << " ";
    }
    cout << endl;
}

double *change_massiv(double *massiv, int length)
{
    for (int i = 0; i < length; i++)
    {
        massiv[i] = massiv[i] - 10;
    }
    return massiv;
}

int below_zero(double *massiv, int length)
{
    int number_below_zero = 0;
    for (int i = 0; i < length; i++)
    {
        if (massiv[i] < 0)
        {
            number_below_zero += 1;
        }
    }
    return number_below_zero;
}

int main()
{
    double *massiv1, *massiv2, *massiv3;
    int below1, below2, below3;
    cout << "Формируем массивы" << endl;
    massiv1 = generate_massiv(4);
    massiv2 = generate_massiv(5);
    massiv3 = generate_massiv(4);
    print_massiv(massiv1, 4);
    print_massiv(massiv2, 5);
    print_massiv(massiv3, 4);
    cout << "Изменяем массивы" << endl;
    massiv1 = change_massiv(massiv1, 4);
    massiv2 = change_massiv(massiv2, 5);
    massiv3 = change_massiv(massiv3, 4);
    print_massiv(massiv1, 4);
    print_massiv(massiv2, 5);
    print_massiv(massiv3, 4);
    cout << "Число отрицательных элементов" << endl;
    below1 = below_zero(massiv1, 4);
    below2 = below_zero(massiv2, 5);
    below3 = below_zero(massiv3, 4);
    cout << "Массив 1: " << below1 << endl;
    cout << "Массив 2: " << below2 << endl;
    cout << "Массив 3: " << below3 << endl;
    cout << "Всего: " << (below1 + below2 + below3) << endl;
}