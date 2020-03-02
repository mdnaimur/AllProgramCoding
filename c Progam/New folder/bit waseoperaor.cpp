#include<iostream>
using namespace std;
main()
{
	unsigned int a,b;
	cout<<"Enter The number: ";
	cin>>a>>b;
	int c;
	c=a&b;
	cout<<"The result AND Opearation is : "<<c<<endl;
	c=a|b;
	cout<<"the output OR operator is "<< c <<endl;
	c=a^b;
	cout<<"The Xor ouput is : "<<c<<endl;
	c=~a;
	cout<<"The complement is : "<<c<<endl;
	c=a<<2;
	cout<<"the shift left complement is :"<<c<<endl;
	c=a>>2;
	cout<<"the shif right  comlement is :"<<c<<endl;
	return 0;
}
