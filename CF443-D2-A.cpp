#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{

    set<char> uniques;
    std::string input;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '{' || input[i] == ' ' || input[i] == '}' || input[i] == ',')
        {
            continue;
        }
        uniques.insert(input.at(i));
    }

    cout << uniques.size();

    return 0;
}
