#include<iostream>
#include<cmath>
#include<cstdio>
#include<fstream>
using namespace std;

int main()
{
	long long  s=0;
	int n;
cin>>n;
	while(n!=0)
	{
		n=n%10;
		s=s+n*n;
	  // s+=((n%10)*(n%10));
	  cout<<"Inside :"<<s<<endl;
		n=n/10;
	 } 
	 cout<<"out side :"<<s<<endl;
	 return 0;

	 
}
