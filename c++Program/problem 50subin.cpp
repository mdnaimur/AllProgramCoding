#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	char ara[1001];
	int i,t,len;

	cin>>t;
	while(t--)
    {

	cin>>ara;
	len=strlen(ara);
	for(i=0;i<len;i++)
	{
		if(ara[i]=='L')
		{
			ara[i]=ara[i-1];
		}
		if(ara[i]=='R')
		{
			ara[i]=ara[i+1];
		}

	}
	cout<<ara<<endl;
    }
return 0;
}
