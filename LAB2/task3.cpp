#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x = 7;

    for (int i = 1; i < 10; i++)
    {
        cout<< i << " * " << x << " = " << i * x << endl;
    }

    int n;

    cout<< endl << "Input N: ";
    cin>> n;

    for (int i = 1; i < 10; i++)
    {
        cout<< i << " * " << n << " = " << i * n << endl;
    }

    return 0;
}