#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int T,count=1;
	double C,d,f,c;
	
	cin>>T;
	while(T--)
	{
		cin>>C>>d;
		f=(9*C)/5+32+d;
		c=(5*f-160)/9;
		
		std::cout<<"Case "<<count<<": "<<std::setprecision(4)<<c<<endl;
	
		count++;
	}
	return 0;
}
