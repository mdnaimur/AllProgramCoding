#include<iostream>
using namespace std;
bool cheak(int);
int main()
{
	int a;
	cout<<"Enter the age:";
	cin>>a;
	if(cheak(a))
	{
		cout<<"You are adult";
	}
	else
	{
		cout<<"You are kid";
	}
	return 0;
}
bool cheak(int age)
{
	if(age>=18)
	return 1;
	else
	return 0;
}
