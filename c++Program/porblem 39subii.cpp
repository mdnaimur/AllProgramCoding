#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char ara[1000],arr[1000],temp[1001];
	int n,t,j,i,len,Temp;
cin>>n;
while(n--)	{

	cin>>ara;

	len=strlen(ara);

	for(i=len-1;i>=0;i--)
	{
		arr[j]=ara[i];

	}
    if(strcmp(ara,arr)==0)
	 {

		cout<<"Yes! it is Palindrom!"<<endl;
	}
	else
	{
		cout<<"Sorry! it is not Palindrome "<<endl;
	}
}

	return 0;
}
