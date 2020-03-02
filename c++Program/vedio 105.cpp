#include<iostream>
using namespace std;

int main()
{
	//cout.setf(ios::showpos, ios::showpoint);
	auto falg=ios::showpos|ios::showpoint|ios::showbase;
	cout.flags(falg);
	cout<<100<<endl;
	cout<<20.1<<endl;
	cout<<140<<endl;
	
	return 0;
}
