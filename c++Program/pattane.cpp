#include<iostream>
using namespace std;

int main()
{
	int coulom,row,i,j;
	cout<<"Enter the Number of row you want to print: ";
	cin>>row;
	cout<<endl;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
