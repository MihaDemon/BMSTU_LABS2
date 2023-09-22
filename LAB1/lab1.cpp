#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void task1()
{
    cout<< "1 13 49" << endl;
}

void task2()
{
    char key;
    cout<< "Input key: ";
    cin>> key;

    cout<< "1" << key << "13" << key << "49" << endl;
}

void task3()
{
    cout<< "1  2  3" << endl;
}

void task4_1()
{
    int a, x;

    cout<< "Input value for a: ";
    cin>> a;

    x = 12 * std::pow(a, 2) + 7 * a - 12;

    cout<< "Result for x: " << x << endl;
}

void task4_2()
{
    int y, x;

    cout<< "Input value for x: ";
    cin>> x;

    y = 3 * std::pow(x, 3) + 4 * std::pow(x, 2) - 11 * x + 1;

    cout<< "Result for y: " << y << endl;
}

void task5()
{
    int weight, volume;

    cout<< "Input weight: ";
    cin>> weight;

    cout<< "Input volume: ";
    cin>> volume;

    cout<< "Density: " << weight / volume << "kg/m^3" << endl;
}

int main()
{
    task1();
    task2();
    task3();
    task4_1();
    task4_2();
    task5();

    return 0;
}