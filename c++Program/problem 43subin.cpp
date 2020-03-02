#include<iostream>
using namespace std;
int main()
{
	int t,p,q,c,i,temp,result;
	
	cin>>t;
	while(t--)
	{
		temp=1;
		cin>>p>>q>>c;
		for(i=1;i<=q;i++)
		{
			temp *=p;
			temp%=c;
		}
		
		cout<<"Result = "<<temp<<endl;
	}
	
	return 0;
}
