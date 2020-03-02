#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double t,i,r,rm,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		
		r=sqrt(abs(a*a-b*b));
		rm=sqrt(a*a+b*b);
		cout<<r<<" "<<rm<<endl;
	}
	
	return 0;
}
