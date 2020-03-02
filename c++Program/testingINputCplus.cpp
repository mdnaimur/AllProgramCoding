#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   std::string name, title;

   std::cout << "Enter your name: ";
   std::getline(std::cin, name);

   std::cout << "Enter your favourite movie: ";
   std::getline(std::cin, title);

   std::cout << name << "'s favourite movie is " << title;

   return 0;
}
