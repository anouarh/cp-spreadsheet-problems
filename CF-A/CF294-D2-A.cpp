#include <iostream>

using namespace std;

int main()
{

   int numberOfLines = 0;
   cin >> numberOfLines;

   int lines[numberOfLines];
   int input, numberOfShots, lineNumber;

   

   for (int i = 0; i < numberOfLines; i++)
   {
      cin >> input;
      lines[i] = input;
   }

   cin >> numberOfShots;

   for (int i = 0; i < numberOfShots; i++)
   {
      int birdPosition, index, birdsToLeft, birdsToRight;
      cin >> lineNumber >> birdPosition;

      index = lineNumber - 1;
      birdsToLeft = birdPosition - 1;
      birdsToRight = lines[index] - birdsToLeft - 1;

      if (index + 1 < numberOfLines)
         lines[index + 1] += birdsToRight;

      if (index - 1 >= 0)
         lines[index - 1] += birdsToLeft;

      lines[index] = 0;

   }

   for (int i = 0; i < numberOfLines; i++)
   {
      cout << lines[i] << endl;
   }

   return 0;
}
