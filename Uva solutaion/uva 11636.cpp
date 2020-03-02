#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int num,i,cunt=1,d;
	

	while(cin>>num&&num>=0)
	{
	
		if(num==1)
		cout<<"Case "<<cunt<<": 0"<<endl;
	//  for(i=1;i<num;i++)
	  										
	  	/*if(pow(2,i)<num &&num<=pow(2,i+1))
	  	cout<<"Case "<<cunt<<": "<<i+1<<endl;*/
	  	
	  	d=pow(2,i);
	  	cout<<"hudai "<<d<<endl;
	  
	  cunt++;
	  
		
	}
	return 0;
}
