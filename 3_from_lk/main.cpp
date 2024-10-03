#include <iostream>
#include <complex>

using namespace std;

int main()
{
    char variant = '1';
    while (variant != '0')
    {
        float y = 0;
        float x = 2.8;
        int N = 10;
        float sum = 0;
        int i = 1;
        y = 0;
        cin >> variant;
        switch (variant)
        {
        case '1':
            /* FOR */
            for (i = 1; i <= N; i++)
            {
                sum = sum + (cos(i * x) + (cos(x) / cos(i)));
            }
            y = 2.8 * x * sum;
            cout << y << endl;
            break;
        case '2':
            /* WHILE*/
            while (i <= N)
            {
                sum = sum + (cos(i * x) + (cos(x) / cos(i)));
                i++;
            }
            y = 2.8 * x * sum;
            cout << y << endl;
            break;
        case '3':
            /*DO WHILE*/
            do
            {
                sum = sum + (cos(i * x) + (cos(x) / cos(i)));
                i++;
            } while (i <= N);

            y = 2.8 * x * sum;
            cout << y << endl;
            break;
        case '0':
            break;
        default:
            cout << "НЕВЕРНЫЙ СИМВОЛ" << endl;
            break;
        }
    }
}