#include<iostream>
using namespace std;
int main()
{
	int age=20;
	bool human=true;
	int *ageptr;
	bool *humanptr;
	ageptr =&age;
	humanptr=&human;
	
	cout<<age<<"---->"<<ageptr<<endl;
	cout<<human<<"---->"<<humanptr<<endl;
	
	return 0;
}
