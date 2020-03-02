#include<stdio.h>
#include<cmath>
int main()
{
	int t,p,q,c,i,temp,result;
	float r;
	
	scanf("%d",&t);
	while(t--)
	{
		temp=1;
		scanf("%d %d %d",&p,&q,&c);
		r=sqrt(q);
		for(i=1;i<=r;i++)
		{
			temp *=p;
			temp=temp*temp;
			temp%=c;
		}
		
		printf("Result = %d\n",temp);
	}
	
	return 0;
}
