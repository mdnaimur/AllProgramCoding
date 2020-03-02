#include<iostream>
#include<ctime>
using namespace std;
void getsecond(unsigned long *par)
{
	*par=time(NULL);
	return ;
}
int main()
{
	unsigned long sec;
	getsecond(&sec);
	cout<<"Number of the second: "<<sec<<endl;
	
	return 0;
}
