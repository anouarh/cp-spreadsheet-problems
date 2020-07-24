#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string results[n];

    for (int i = 0; i < n; i++)
    {
        string tmp;
        string input;
        cin >> input;
        if (input.size() <= 10)
        {
            results[i] = input;
        }
        else
        {
            tmp = input[0] + std::to_string(input.size()-2) + input[input.size() - 1];
            results[i] = tmp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << results[i] << endl;
    }

    return 0;
}
