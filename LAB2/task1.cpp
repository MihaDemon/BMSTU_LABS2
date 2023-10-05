#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x, y, z;

    //Task 1

    bool condition = true;

    cout<< "Input x: ";
    cin>> x;

    cout<< "Input y: ";
    cin>> y;

    if (x % 2 == 0 && y % 2 == 0)
    {
        condition = false;
    }

    cout<< "Result: " << condition << std::boolalpha << endl;

    //Task 2

    condition = true;

    cout<< "Input x: ";
    cin>> x;

    cout<< "Input y: ";
    cin>> y;

    if (x > 20 || y > 20)
    {
        condition = false;
    }

    cout<< "Result: " << condition << std::boolalpha << endl;

    //Task 3

    condition = true;

    cout<< "Input x: ";
    cin>> x;

    cout<< "Input y: ";
    cin>> y;
    
    if (x != 0 || y != 0)
    {
        condition = false;
    }

    cout<< "Result: " << condition << std::boolalpha << endl;

    //Task 4

    condition = true;

    cout<< "Input x: ";
    cin>> x;

    cout<< "Input y: ";
    cin>> y;

    cout<< "Input z: ";
    cin>> z;

    if (x > 0 && y > 0 && z > 0)
    {
        condition = false;
    }

    cout<< "Result: " << condition << std::boolalpha << endl;

    //Task 5

    condition = false;

    cout<< "Input x: ";
    cin>> x;

    cout<< "Input y: ";
    cin>> y;

    cout<< "Input z: ";
    cin>> z;

    if (x == 0 && y != 0 && z != 0)
    {
        condition = true;
    }
    else if (x != 0 && y == 0 && z != 0)
    {
        condition = true;
    }
    else if (x != 0 && y != 0 && z == 0)
    {
        condition = true;
    }

    cout<< "Result: " << condition << std::boolalpha << endl;

    //Task 6

    condition = false;

    cout<< "Input x: ";
    cin>> x;

    cout<< "Input y: ";
    cin>> y;

    cout<< "Input z: ";
    cin>> z;

    if (x > 100 || y > 100 || z > 100)
    {
        condition = true;
    }

    cout<< "Result: " << condition << std::boolalpha << endl;

    return 0;
}