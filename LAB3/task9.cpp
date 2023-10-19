#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string sentence;

    cout<< "Input sentence: ";
    std::getline(cin, sentence);

    int letter_cout = 0;
    int a_count = 0;

    for (char &ch : sentence)
    {
        if (std::isalpha(ch))
        {
            letter_cout++;

            if (ch == 'a')
            {
                a_count++;
            }
        }
    }

    double percentage = static_cast<double>(a_count) / letter_cout * 100;

    cout << "The percent of 'a' in sentense is: " << std::fixed << std::setprecision(2) << percentage << "%" << endl;

    return 0;
}