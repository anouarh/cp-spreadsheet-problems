#include <iostream>
#include <vector>
#include <set>
#include <iomanip>

using namespace std;

int main()
{
   int step, mod;
   while (cin >> step >> mod)
   {
      vector<int> results;
      set<int> uniques;
      int times = 0, element = 0;

      while (times < mod)
      {
         element = (element + step) % mod;
         results.push_back(element);
         times++;
      }

      for (auto n : results)
      {
         uniques.insert(n);
      }

      size_t intendedSize = mod;
      if (uniques.size() == intendedSize)
      {
         cout << setw(10) << step << setw(10) << mod << "    "
              << "Good Choice" << endl;
         cout << endl;
      }
      else
      {
         cout << setw(10) << step << setw(10) << mod << "    "
              << "Bad Choice" << endl;
         cout << endl;
      }
   }
   return 0;
}
