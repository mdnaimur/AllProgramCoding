#include<iostream>
using namespace std;
typedef struct {
	char name;
	int roll;
	
}use ;

int main()
{
	use naimur;
	use *naimurPtr;
	
	naimurPtr = &naimur;
	naimur.name='M';
	naimurPtr->roll=315151004;
	cout<<naimurPtr->name<<endl;
	cout<<naimur.roll<<endl;
	
	return 0;
}
