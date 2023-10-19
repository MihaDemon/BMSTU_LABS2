#include <iostream>
#include <string>

int main() {
    std::string word;

    std::cout<< "Input word: ";
    std::cin>> word;

    word = std::string(word.size(), '*') + word + std::string(word.size(), '*');

    std::cout << word << std::endl;

    return 0;
}