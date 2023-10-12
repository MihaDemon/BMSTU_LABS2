#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using byte = unsigned char;

bool isPawnMoveValid(std::pair<byte, byte> const &posA, std::pair<byte, byte> const &posB)
{
    return posA.first == posB.first && (posB.second == posA.second + 1);
}

bool isPawnCaptureValid(std::pair<byte, byte> const &posA, std::pair<byte, byte> const &posB)
{
    return (abs(posB.first - posA.first) == 1) && (posB.second == posA.second + 1);
}


int main()
{
    //Task1

    std::pair<byte, byte> positionA;
    std::pair<byte, byte> positionB;

    cout<< "Input coords for position A:" << endl;
    cin>> positionA.first >> positionA.second;

    cout<< "Input coords for position B:" << endl;
    cin>> positionB.first >> positionB.second;

    if (positionA.first == positionB.first || positionA.second == positionB.second)
    {
        cout<< "The Rook on position A threateans figure on position B" << endl;
    }
    else
    {
        cout<< "The Rook on position A doesn't threatean figure on position B" << endl;
    }

    //Task2

    cout<< "Input coords for position A:" << endl;
    cin>> positionA.first >> positionA.second;

    cout<< "Input coords for position B:" << endl;
    cin>> positionB.first >> positionB.second;

    if (std::abs(positionA.first - positionB.first) == std::abs(positionA.second - positionB.second))
    {
        cout<< "The Bishop on position A threateans figure on position B" << endl;
    }
    else
    {
        cout<< "The Bishop on position A doesn't threatean figure on position B" << endl;
    }

    //Task3

    cout<< "Input coords for position A:" << endl;
    cin>> positionA.first >> positionA.second;

    cout<< "Input coords for position B:" << endl;
    cin>> positionB.first >> positionB.second;

    if ( (std::abs(positionB.first - positionA.first) <= 1) && (std::abs(positionB.second - positionA.second) <= 1) )
    {
        cout<< "The King can move to this position" << endl;
    }
    else
    {
        cout<< "The King can't move to this position" << endl;
    }

    //Task4

    cout<< "Input coords for position A:" << endl;
    cin>> positionA.first >> positionA.second;

    cout<< "Input coords for position B:" << endl;
    cin>> positionB.first >> positionB.second;

    if ( (positionA.first == positionB.first) || (positionA.second == positionB.second) || (std::abs(positionB.first - positionA.first) == std::abs(positionB.second - positionA.second)) )
    {
        cout<< "The Queen threateans figure on position B" << endl;
    }
    else
    {
        cout<< "The Queen doesn't threatean figure on position B" << endl;
    }

    //Task5

    cout<< "Input coords for position A:" << endl;
    cin>> positionA.first >> positionA.second;

    cout<< "Input coords for position B:" << endl;
    cin>> positionB.first >> positionB.second;

    if ( isPawnMoveValid(positionA, positionB) || isPawnCaptureValid(positionA, positionB) )
    {
        cout<< "Pawn can capture piece on position B or can move to position B" << endl;
    }
    else
    {
        cout<< "Pawn can neither capture nor move to position B" << endl;
    }

    return 0;
}