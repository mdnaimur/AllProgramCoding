#include<iostream>
#include<cmath>
#include<cstdio>
#include<fstream>
using namespace std;

long long  happy(long long n)
{
	long long  s=0;
	
	if(n<=9) 
	return n;
	while(n!=0)
	{
		
	   s+=((n%10)*(n%10));
	  
		n=n/10;
	 } 
	 happy(s);
	 
}
int main()
{
	int n,s,i,sn,nn,sum;

     cin>>nn;
     for(i=1;i<=nn;i++)
     {
     	
     	cin>>n;
     		if(n==7)
		 cout<<"Case #"<<i<<": "<<n<<" is a Happy number."<<endl;
     else if(happy(n)==1)
		 cout<<"Case #"<<i<<": "<<n<<" is a Happy number."<<endl;
     	
     	else 
		 cout<<"Case #"<<i<<": "<<n<<" is an Unhappy number."<<endl;
	 }


	return 0;
}
