#include<iostream>
using namespace std;
int main()

{
	int *pointer= nullptr;
	pointer=new int;
	if(pointer!=nullptr)
	{
		*pointer=65;
		cout<<*pointer<<endl;
		delete pointer;
	}
	else
	{
		cout<<"Memory not allowcated!";
	}
}
