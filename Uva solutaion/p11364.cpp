#include<iostream>
using namespace std;

int main()
{
	int result,t,location,position,i,max,min;
	cin>>t;
	while(t--)
	{
		min=99;
		max=0;
		cin>>location;
		for(i=1;i<=location;++i){
		
		cin>>position;
		if(position>max)
		max=position;
		if(position<min)
		min=position;
		result=(max-min)*2;
	}
		cout<<result<<endl;
	}
	return 0;
}
