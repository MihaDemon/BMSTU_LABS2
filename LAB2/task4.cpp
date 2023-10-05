#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Task 1
    int summ = 0;

    for (int i = 8; i < 16; i++)
    {
        summ = summ + i;
    }

    cout<< "Summ of integers in range 8 - 15 equal to " << summ << endl;

    //Task 2

    summ = 0;

    int a;

    cout<< "Input a: ";
    cin>> a;

    for (int i = a; i < 20; i++)
    {
        summ = summ + i;
    }

    cout<< "Summ of integers in range " << a << " - 20 equal to " << summ << endl;

    //Task 3

    summ = 0;

    int b;

    cout<< "Input b: ";
    cin>> b;

    for (int i = 1; i < b; i++)
    {
        summ = summ + i;
    }

    cout<< "Summ of integers in range 1 - " << b << " equal to " << summ << endl;

    //Task 4

    summ = 0;

    cout<< "Input a: ";
    cin>> a;

    cout<< "Input b: ";
    cin>> b;

    for (int i = a; i <= b; i++)
    {
        summ = summ + i;
    }

    cout<< "Summ of integers in range " << a << " - " << b << " equal to " << summ << endl;

    return 0;
}