#include<iostream>
using namespace std;
void show(int [],int);

int main()
{
	int number[]={26,23,65,65,46};
	int len=5;
	show(number,len);
	
	return 0;
}
void show(int n[],int lw)
{
	int count;
	for(count=0;count<lw;count++)
	{
		cout<<n[count]<<endl;
	}
}
