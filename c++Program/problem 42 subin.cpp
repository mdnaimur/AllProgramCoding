#include<iostream>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(k=n;k>=0;k--)
		{
			if(k==0)cout<<"1"<<endl;
			else if(k==1)cout<<"2+ ";
			else cout<<"2^"<<k<<" + ";
		}
	}
	
	return 0;
}
