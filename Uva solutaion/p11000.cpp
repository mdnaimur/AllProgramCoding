#include<iostream>
using namespace std;
int main()
{
long long int female,total,male,tem,Tem;
int i,n;

	while(cin>>n)
	{

		if(n==-1)
			break;
			total=1;
	    male=0;
	    female=1;
      Tem=0;
		for(i=1;i<=n;i++)
		{
		    male=total;
		    tem=female;
		    female=female+Tem;
		    total=total+female;
		    Tem=tem;
		}
		cout<<male<<" "<<total<<endl;

	}
	return 0;
}
