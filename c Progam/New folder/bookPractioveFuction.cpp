#include <iostream>
using namespace std;
// function declaration
void swap(int x, int y);
int main ()
{
// local variable declaration:
int a = 100;
int b = 200;
cout << "Before swap, value of a :\t" << a << endl;
cout << "Before swap, value of b :" << b << endl;
// calling a function to swap the values.
//swap(a, b);

int temp;
temp = a; /* save the value of x */
a= b; /* put y into x */
b= temp; /* put x into y */
cout << "After swap, value of a :\t" << a << endl;
cout << "After swap, value of b :" << b << endl;
return 0;
}
