#include<iostream>
//#inlcude<exception>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter the two value "<<endl;
	cin>>a>>b;
	try{
		if(b==0)
		throw "Divide by zero ";
		c=a/b;
		cout<<"Reslting value is " <<c<<endl;
	}
	catch(const char *p){
		cout<<"Exception found "<<endl<<p<<endl;
	}
	return 0;
}
