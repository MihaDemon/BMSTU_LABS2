#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::string city_name;

    cout<< "Input city name: ";
    cin>> city_name;

    if (city_name.size() % 2 == 0)
    {
        cout<< "Even number of chars" << endl;
    }

    else
    {
        cout<< "Odd number of chars" << endl;
    }

    return 0;
}