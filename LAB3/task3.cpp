#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

    for (int i = 0; i < 3; i++)
    {
        std::swap(v[i], v[20 - 3 + i]);
    }

    for (int const &num : v)
    {
        cout<< num << " ";
    }

    return 0;
}