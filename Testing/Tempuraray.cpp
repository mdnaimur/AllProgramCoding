#include<iostream>
using namespace std;

int main()
{
	int *pointer;
	pointer= new int;
	
	cout<<pointer;
	*pointer=23;
	delete pointer;
	cout<<endl<<&pointer;
	
	return 0;
}
