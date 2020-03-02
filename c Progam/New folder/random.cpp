#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int number,k;
    int heads=0, tails=0;
   // cin>>k;
    srand(time(NULL));
    number = rand() % 100 + 1;  //Generate random number 1 to 100
          if (number <= 75) {//75% chance
                heads++; //This is head
                cout<<"the heads is"<<heads;
            }
          else
               { tails++; //This is tail
                cout<<"the tails is :"<<tails;}
}
