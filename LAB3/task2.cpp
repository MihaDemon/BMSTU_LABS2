#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int vector_sum(std::vector<int> const &v)
{
    int sum = 0;

    for (int num : v)
    {
        sum += num;
    }

    return sum;
}

int vector_power2_sum(std::vector<int> const &v)
{
    int sum = 0;

    for (int num : v)
    {
        int power = num * num;

        sum += power;
    }

    return sum;
}

int vector_first_six_sum(std::vector<int> const &v)
{
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum += v[i];
    }

    return sum;
}

int vector_k1_k2_sum(std::vector<int> const &v, int k1, int k2)
{
    int sum = 0;

    for (int i = k1; i < k2 + 1; i++)
    {
        sum += v[i];
    }

    return sum;
}

int vector_avg(std::vector<int> const &v)
{
    int sum = vector_sum(v);

    int avg = sum / v.size();

    return avg;
}

int vector_k1_k2_avg(std::vector<int> const &v, int k1, int k2)
{
    int sum = vector_k1_k2_sum(v, k1, k2);

    int avg = sum / (k2 + 1 - k1);

    return avg;
}

int main()
{
    std::vector<int> v = {1, 2, 2, 8};

    return 0;
}