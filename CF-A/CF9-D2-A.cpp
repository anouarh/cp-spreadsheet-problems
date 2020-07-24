#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> rolls;
    int input;

    for (int i = 0; i < 2; i++)
    {
        cin >> input;
        rolls.push_back(input);
    }

    int tmp = rolls[0];
    if (tmp <= rolls[1])
        tmp = rolls[1];
    int num = 6 - tmp + 1;
    if (num == 6)
        cout << "1/1";
    else if (num == 5)
        cout << "5/6";
    else if (num == 4)
        cout << "2/3";
    else if (num == 3)
        cout << "1/2";
    else if (num == 2)
        cout << "1/3";
    else if (num == 1)
        cout << "1/6";
    else
        cout << "0/6";

    return 0;
}
