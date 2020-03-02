#include<stdio.h>

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
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld",&n);
		sum=0;
		for(i=1;i<=n;i++)
		{
			sum+=i/fact(i);
		  
		}
		printf("%0.4lf\n",sum);
	}
	return  0;
}
