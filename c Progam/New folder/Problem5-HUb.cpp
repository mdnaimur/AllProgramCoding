#include<iostream>
using namespace std;
int main()
{
	int i,t,a;
	int c,b,p,d;
	cin>>t;
	while(t--)
	
	{
		c=0;
		cin>>a;
		b=a;
		while(b!=0)
		{
			p=b%10;
			b=b/10;
			if(p==4)
			{
				c++;
				
			}		
			
		}
		cout<<c<<endl;
		
	}
	return 0;
}
