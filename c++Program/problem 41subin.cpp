#include<iostream>
using namespace std;

long long int fact(long long int n)
{
	long long int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int t;
	double sum,i;
	long long int n;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		sum=0;
		for(i=1;i<=n;i++)
		{
			sum+=i/fact(i);
		  
		}
		cout.precision(5);
		cout<<sum<<endl;
	}
	return  0;
}
