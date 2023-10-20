#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

bool less_than_zero(int &num)
{
    return num < 0;
}

bool even_element(int &num)
{
    return num % 2 == 0;
}

void task1(std::vector<int> &v)
{
    int index = 0;

    auto it = std::find_if(v.begin(), v.end(), less_than_zero);

    if (it != v.end())
    {
        index = std::distance(v.begin(), it);

        v.erase(v.begin() + index);
    }

    for (int const &num : v)
    {
        cout<< num << " ";
    }
}

void task2(std::vector<int> &v)
{
    auto it = std::find_if(v.rbegin(), v.rend(), even_element);

    if (it != v.rend())
    {
        v.erase((it + 1).base());
    }

    for (int &num : v)
    {
        cout<< num << " ";
    }
}

int main()
{
    std::vector<int> v1 = {0, -1, 2, -3, 4};
    std::vector<int> v2 = {1, 2, 4, 6, 5, 8, 10};

    task1(v1);

    cout<< endl;

    task2(v2);

    return 0;
}