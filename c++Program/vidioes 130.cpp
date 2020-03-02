#include<iostream>
using namespace std;
template<class t,class n> void display(t x,n y);
int main()
{
	display("Md Naimur Rahman",25);
	display(21,22);
	display("Dalim","Puspo");
	
	return 0;
	
}
template<class t,class n> void display(t x,n y)
{
	cout<<"First input show "<<x<<"  Second input show "<<y<<endl;
	
}
