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
    double a, x;

    cout<< "Input value for a: ";
    cin>> a;

    x = 12 * std::pow(a, 2) + 7 * a - 12;

    cout<< "Result for x: " << x << endl;
}

void task4_2()
{
    double y, x;

    cout<< "Input value for x: ";
    cin>> x;

    y = 3 * std::pow(x, 3) + 4 * std::pow(x, 2) - 11 * x + 1;

    cout<< "Result for y: " << y << endl;
}

void task5()
{
    double weight, volume;

    cout<< "Input weight: ";
    cin>> weight;

    cout<< "Input volume: ";
    cin>> volume;

    cout<< "Density: " << weight / volume << "kg/m^3" << endl;
}

void task6()
{
    double a, b, x;

    cout<< "Input a: ";
    cin>> a;

    cout<< "Input b: ";
    cin>> b;

    x = -b / a;

    cout<< "Result: " << x << endl;
}

struct dot
    {
        double x, y;
    };

std::istream &operator>> (std::istream &in, dot &obj)
    {
        cout<< "Input x coord: ";
        cin>> obj.x;

        cout<< "Input y coord: ";
        cin>> obj.y;

        return in;
    }

void task7()
{
    dot first, second;

    cout<< "Input first dot coords" << endl;
    cin>> first;

    cout<< "Input second dot coords" << endl;
    cin>> second;

    double length;

    length = std::sqrt( std::pow( second.x - first.x, 2) + std::pow( second.y - first.y, 2) );

    std::cout<< "Result: " << length << endl; 
}

void task8()
{
    double a, b, h;

    cout<< "Input a: ";
    cin>> a;

    cout<< "Input b: ";
    cin>> b;

    cout<< "Input h: ";
    cin>> h;

    double x = (b - a) / 2;

    double c = std::sqrt(h * h + x * x);

    double P = a + b + 2 * c;

    cout<< "Result: " << P << endl;
}

void task9()
{
    double a;

    cout<< "Input a: ";
    cin>> a;

    double S = a * a * a;

    double S2 = 6 * a * a;

    cout<< "S: " << S << endl;
    cout<< "S2: " << S2 << endl;
}

void task10()
{
    double a;

    cout<< "Input a: ";
    cin>> a;

    double P = 4 * a;

    cout<< "Result: " << P << endl;
}

void task11()
{
    double r;

    cout<< "Input r: ";
    cin>> r;

    double d = 2 * r;

    cout<< "Resutl: " << d << endl;
}

void task12()
{
    std::string name;

    cout<< "Input your name: ";
    cin>> name;

    cout<< "Hello, " << name << "! My name is C++." << endl;
}

int main()
{
    cout<< "Task 1" << endl;
    task1();
    cout<< "Task 2" << endl;
    task2();
    cout<< "Task 3" << endl;
    task3();
    cout<< "Task 4" << endl;
    task4_1();
    task4_2();
    cout<< "Task 5" << endl;
    task5();
    cout<< "Task 6" << endl;
    task6();
    cout<< "Task 7" << endl;
    task7();
    cout<< "Task 8" << endl;
    task8();
    cout<< "Task 9" << endl;
    task9();
    cout<< "Task 10" << endl;
    task10();
    cout<< "Task 11" << endl;
    task11();
    cout<< "Task 12" << endl;
    task12();

    return 0;
}