#include <iostream>

using namespace std;

int main()
{

    int numberOfOranges, maxSizeOrange, emptyCondition;
    int sum = 0;
    int result = 0;

    cin >> numberOfOranges >> maxSizeOrange >> emptyCondition;

    int oranges[numberOfOranges];

    for (int i = 0; i < numberOfOranges; i++)
    {
        cin >> oranges[i];
    }

    for (int i = 0; i < numberOfOranges; i++)
    {
        if (oranges[i] > maxSizeOrange)
        {
            continue;
        }
        sum += oranges[i];
        if (sum > emptyCondition)
        {
            result++;
            sum = 0;
        }
    }

    cout << result;

    return 0;
}
