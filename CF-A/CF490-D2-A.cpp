#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int result = 0;
    vector<int> prog, math, ph;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (input == 1)
            prog.push_back(i + 1);
        else if (input == 2)
            math.push_back(i + 1);
        else
            ph.push_back(i + 1);
    }

    int minimum = min({prog.size(), math.size(), ph.size()});

    cout << minimum << endl;

    for (int i = 0; i < minimum; i++)
    {
        cout << prog[i] << ' ' << math[i] << ' ' << ph[i] << endl;
    }

    return 0;
}
