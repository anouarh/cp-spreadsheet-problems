#include <iostream>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    char results[n];

    results[0] = 'a';
    for (int i = 1; i <= k; i++)
    {
        char a = results[i - 1];
        a++;
        results[i] = a;
    }

    int j = 0;
    for (int i = k; i < n; i++)
    {
        results[i] = results[j];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << results[i];
    }

    return 0;
}
