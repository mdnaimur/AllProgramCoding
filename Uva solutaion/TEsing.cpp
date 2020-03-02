#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i;
	
	cin>>n;
	int d,e;
	d=pow(2,n);
	cout<<"before looping "<<d<<endl;
	for(i=1;i<n;i++)
	e=pow(2,i);
	cout<<"After looping "<<e<<endl;
	
	
	return 0;
}
