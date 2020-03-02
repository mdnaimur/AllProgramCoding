#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int h1,h2,m1,m2,H1,H2,r,t1,t2;
	
 //cin>>h1>>m1>>h2>>m2;
 while (scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
	{
		if(h1==0&&h1==0&&m1==0&&m2==0)
		{
			break;
		}
/*	if(h1<=0)
	{
		h1=12;
		
	
	}

	if(h2<=0)
	{
		h2=12;
	}
	
	
	if(h1>12)
	{
		h1%=12;
		
	}
	if(h2>12)
	{
		h2%=12;
	
	}*/
	H1=h1*60;
	H2=h2*60;
	
	t1=H1+m1;
	t2=H2+m2;
	if(t1>t2)
	{
		t2=t2+(60*24);
	}
	r=t2-t1;
	cout<<r<<endl;
	}
	
	return 0;
}
