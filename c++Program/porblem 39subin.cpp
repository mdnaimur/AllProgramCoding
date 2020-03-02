#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char ara[1000],arr[1000],temp[1001];
	int n,t,j,i,len,Temp;
cin>>n;
while(n--)	{

	cin>>ara;
	
	len=strlen(ara);
	for(j=0;j<len;j++)
	{
	
	   temp[Temp]=ara[j];
	   
	for(i=len-1;i>=0;i--)
	{
		arr[t]=ara[i];
		
	}

}
  		if(temp[Temp]==arr[t])
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
