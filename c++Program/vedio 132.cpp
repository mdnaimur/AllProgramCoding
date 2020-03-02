#include<iostream>
using namespace std;
template<typename N> void whos(N x);
template<typename N,class M> void whos(N x,M y);
int main()
{
	whos(25);
	whos(254.56);
	whos("MD NAIMUR RAHMAN");
	whos("Dalim +","Puspo");
	whos(235,235.56);
	return 0;
}
template<typename N> void whos(N x)
{
	cout<<"Generic function with one paramenter "<<endl;
	cout<<"The value of x --> "<<x<<endl;
}
template<typename N,class M> void whos(N x,M y)
{
	cout<<"Generic function with twoo paramenter "<<endl;
	cout<<"The value of x --> "<<x<<endl;
	//cout<<"Generic function with twoo paramenter "<<endl;
	cout<<"The value of y --> "<<y<<endl;
	
}
