#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int;
	//*ptr=34;
	cout<<*ptr;
	delete ptr;
	
	return 0;
}
