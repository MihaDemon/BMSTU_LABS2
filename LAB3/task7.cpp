#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool __lt__(std::string &s1, std::string &s2)
{
    return s1.size() < s2.size();
}

int main() {
    std::vector<std::string> cities;

    for (int i = 0; i < 3; i++)
    {
        std::string city;

        std::cout<< "Input city: ";
        std::cin>> city;

        cities.push_back(city);    
    }

    auto it = std::minmax_element(cities.begin(), cities.end(), __lt__);

    std::string the_shortest = *it.first;
    std::string the_longest = *it.second;

    std::cout << "Shortest name: " << the_shortest << std::endl;
    std::cout << "Longes name: " << the_longest << std::endl;

    return 0;
}