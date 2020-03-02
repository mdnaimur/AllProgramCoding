#include<iostream>
using namespace std;
template<typename N> void display(N x);
void display(int x);
int main()
{
	string p;
	cout<<"Enter the value ";
//	cin>>p;
	display(24.23);
		//cout<<"Enter the value ";
	//cin>>p;
	display(24);
	display(24);
	display("Md Naimur Rahman");
	
	return 0;
}
template<typename N> void display(N x)
{
	cout<<"Inside the generic fuction "<<endl;
	
	cout<<"Value of generic fuction "<<x<<endl;
}
void display(int x)
{
	cout<<"Inside the Normal fuction "<<endl;
	
	cout<<"Value of Normal fuction "<<x<<endl;
}
