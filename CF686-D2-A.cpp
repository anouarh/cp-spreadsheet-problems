#include <iostream>

using namespace std;

int main()
{

    int n; 
    long long int x;
    int dKids = 0;
    cin >> n >> x;
    while (n--)
    {
        char op;
        int d;
        cin >> op >> d;
        if (op == '+')
        {
            x += d;
        }
        else
        {
            if (x < d)
            {
                dKids++;
            }
            else
            {
                x -= d;
            }
        }
    }

    cout << x << " " << dKids;

    return 0;
}
