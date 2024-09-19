#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string surname;
    float duration;
    float price;
    float itogo;
    float current_call;
    char table[100];
    int arg;
    string str_piece;
    ifstream file("table.txt");
    // Read the file line by line into a string
    string line;
    while (getline(file, line))
    {   
        arg = 1;
        stringstream obj_ss(line);
        // getline() function to go through source string until it is finished.
        while (getline(obj_ss, str_piece, ' '))
        {
            switch (arg)
            {
            case 1:
                surname = str_piece;
                arg += 1;
                break;
            
            case 2:
                duration = stof(str_piece);
                arg += 1;
                break;

            case 3:
                price = stof(str_piece);
                arg += 1;
                break;

            default:
                break;
            }
        }
        itogo += (duration * price);
    }
    cout << itogo << endl;
}