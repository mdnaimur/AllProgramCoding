#include<iostream>
using namespace std;
void display(const int a[],int limt);
int main()
{
	int n[]={60,90,89,40,68};
	display(n,5);

return 0;
}
void display(const int a[],int limt)
{
	for(int c=0;c<limt;c++)
	{
		cout<<a[c]<<"\t";
	}
	
}
