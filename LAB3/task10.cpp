#include <iostream>
#include <string>

int main()
{
    std::string sentence = "Can you can a can as a canner can can a can?";
    std::string new_word;

    std::cout<< "Input new word to replace can: ";
    std::cin>> new_word;

    int pos = 0;

    while ((pos = sentence.find("can", pos)) != std::string::npos)
    {
        sentence.replace(pos, 3, new_word);
        pos += new_word.length();
    }

    std::cout << sentence << std::endl;

    return 0;
}