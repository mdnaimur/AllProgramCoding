#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	  return 1;
	  else 
	  return n*fact(n-1);
}
int main()
{
	int al;
	cout<<"Enter the factorial number : ";
	cin>>al;
	int r=fact(al);
	cout<<"Result is :"<<r<<endl;
	
	return 0;
}
