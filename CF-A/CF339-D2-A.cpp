#include <iostream>

using namespace std;

int main()
{

    string board;
    int ones = 0, twos = 0, threes = 0;

    getline(cin, board);

    for (int i = 0; i < board.size(); i++)
    {
        if (board[i] == '1')
            ones++;
        else if (board[i] == '2')
            twos++;
        else if (board[i] == '3')
            threes++;
        else
            ;
    }

    for (int i = 0; i < ones; i++)
    {
        if (i == 0)
            cout << "1";
        else
            cout << "+1";
    }
    for (int i = 0; i < twos; i++)
    {
        if (i == 0 && ones == 0)
            cout << "2";
        else
            cout << "+2";
    }

    for (int i = 0; i < threes; i++)
    {
        if (i == 0 && twos == 0 && ones == 0)
            cout << "3";
        else
            cout << "+3";
    }

    return 0;
}
