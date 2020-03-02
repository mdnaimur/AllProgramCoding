#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 const int maxCount = 4;
 const int width = 6;
 int row;
 int column;

 for(row=1;row<=10;row++)
 {
   for(column = 1; column <= maxCount; column++)
     {
     cout << setw(width) << row * column;
     }
   cout << endl;
 }

 return 0;
}
