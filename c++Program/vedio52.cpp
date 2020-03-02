#include<iostream>
#include<string>
using namespace std;
void display();
void display(string name);
int main()
{
	display();
	display("naimur");
	
	return 0;
}
void display()
{
	cout<<"Tesig overried "<<endl;
}
void display(string name)
{
	cout<<"Tesing overried "<<name<<endl;
}
