#include <iostream>

using namespace std;

int main()
{
    int k;
    int r;
    int x = 1;

    cin>>k>>r;

    while (x<=10) {
        if (((k*x)%10==0) || (k*x)%10==r)
            break;
        x++;
    }

    cout<<x;

    return 0;
}
