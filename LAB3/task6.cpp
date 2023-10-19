#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

bool func(std::string &s1, std::string &s2)
{
    return s1.size() > s2.size();
}

int main()
{
    std::string surname1;
    std::string surname2;

    cout<< "Input first surname: ";
    cin>> surname1;

    cout<< "Input second surname: ";
    cin>> surname2;

    cout<< std::boolalpha << func(surname1, surname2);

    return 0;
}