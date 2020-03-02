#include<iostream>
using namespace std;

int fact (int m )
{
	int i,sum=1;
	int n;
	for(i=1;i<=m;i++)
	
	{
		sum=sum*i;
		
	}
	//cout<<"Funtion result :"<<sum<<endl;
	return sum;
}
int main()
{
	int t,hn,n,i,sum,r;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>hn;
		for(i=1;i<=hn;i++)
		{
			cin>>n;
				r=fact(n);
		
			sum=sum+r;
		
		}
		
		
		
		cout<<"Result:"<<sum;
	}
	
  return 0;
}
