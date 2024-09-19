#include <iostream>
#include <complex>

using namespace std;

int main()
{
    float y;
    float x = 2.8;
    int N = 10;
    float sum = 0;
    char variant;
    cin >> variant;
    switch (variant)
    {
    case '1':
        /* FOR */
        for (int i = 1; i <= N; i++)
        {
            sum = sum + (cos(i * x) + (cos(x) / cos(i)));
        }
        y = 2.8 * x * sum;
        break;
    case '2':
        /* WHILE*/
        int i = 1;
        while (i <= N)
        {
            sum = sum + (cos(i * x) + (cos(x) / cos(i)));
            i++;
        }
        y = 2.8 * x * sum;
        break;
    case '3':
        /*DO WHILE*/
        do
        {
            int i = 1;
            sum = sum + (cos(i * x) + (cos(x) / cos(i)));
            i++;
        } while (i <= N)
        {
            sum = sum + (cos(i * x) + (cos(x) / cos(i)));
            i++
        }
        y = 2.8 * x * sum;
        break;
    default:
        cout << "НЕВЕРНЫЙ СИМВОЛ";
        break;
    }
    cout << y;
}