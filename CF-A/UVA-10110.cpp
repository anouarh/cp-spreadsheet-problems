#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {

    // because of input constraints
    unsigned int n;

    // keep prompting user for input until 0 is typed in
    while (cin >> n && n != 0)
    {
        // check if number has a complete sqrt
        unsigned int sq = (int)sqrt(n);
        cout << (sq * sq == n ? "yes\n" : "no\n");
    }


    /* My Solution
    int bulbState = 0;
    int cnt = 0;
    int n;
    vector<string> results;

    while (cin >> n)
    {
        if (n != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                {
                    cnt++;
                }
            }

            if (cnt >= 2)
            {
                bulbState = cnt % 2;
            }

            if (bulbState == 0)
            {
                results.push_back("no");
            }
            else {

                results.push_back("yes");
            }
            cnt = 0;
            bulbState = 0;
        }
        else
        {
            break;
        }

    }
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << endl;
    } */



    return 0;
}
