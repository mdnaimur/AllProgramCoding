#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long int a;
	int i,count,j;
	
	while(cin>>a)
	{
		if(a==0)break;
		count=1;
		for(i=1;i<a;i++)
		{
			
			j=pow(i,2);
			//cout<<"i for j value "<<i<<" "<<j<<endl;
			if(j%2==0)
			{
				cout<<"J cheak "<<j<<endl;
				count++;
			}
			
		}
		cout<<count<<endl;
	}
	return 0;
}
