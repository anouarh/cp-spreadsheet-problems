#include <iostream>

using namespace std;

int main() {

    int pos = 1;
    string ground;
    string instruct;

    cin>>ground,
    cin>>instruct;

    for (int i = 0; i < instruct.length(); i++)
    {
        if (ground[pos-1] == instruct[i])
            pos++;
    }

    cout<<pos;
    

    return 0;
}