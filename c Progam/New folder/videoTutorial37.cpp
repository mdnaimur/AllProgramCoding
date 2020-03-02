#include<iostream>
using namespace std;
void display(int *start, int *end);
int main()
{
	int a[1000],size,i;
	cout<<"Enter The size of array: ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cin>>a[i];
		
	}
	display(a,a+2);
	return 0;
}
void display(int *start,int *end)
{
	int *ptr;
	for(ptr=start;ptr!=end;ptr++)
	{
		cout<<"Answre is :"<<*ptr<<endl;
	}
}
