#include<iostream>
using namespace std;
void display(int *ptr);
int main()
{
	int age;
	cin>>age;
	display(&age);
	cout<<"Output is in main fucion: "<<age<<endl;
	
	
	return 0;
}
void display(int *ptr)
{
	cout<<"Fuction value of pointr :"<<*ptr<<endl;
	*ptr=100;
}
