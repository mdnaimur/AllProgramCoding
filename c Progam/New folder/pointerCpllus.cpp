//pointer
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age :";
	cin>>age;
	bool human=true;
	int *ageptr;
	bool *humanptr;
	
	ageptr=&age;
	humanptr=&human;
	cout<<age<<" -- > This is address of memory	==>\a\v\f\b"<<ageptr <<endl;
		cout<<human<<" -->this is address of memory	==>\r\t\ooo"<<humanptr <<endl;
		
			cout<<age<<" -->this is value of memory address	==>"<<*ageptr <<endl;
		cout<<human<<" -->This is value of memory address	==>"<<*humanptr <<endl;

	
	return 0;
}
