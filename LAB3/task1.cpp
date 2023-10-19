#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a;
    std::vector<int> v = {2, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<< "Input a: ";
    cin>> a;

    for (int& num : v)
    {
        num *= 2;
        num -= a;

        if (v[0] != 0)
        {
            num /= v[0];
        }
    }

    for (const int& num : v)
    {
        cout << num << " ";
    }

    return 0;
}