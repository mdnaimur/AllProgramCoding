#include<iostream>
using namespace std;
struct student{
	int a;
	double b;
	char c;
	long long int d;
	float e;
};
int main()
{
	cout<<"Int -->\t" <<sizeof(int)<<endl;
	cout<<"short int--> \t"<<sizeof(short int)<<endl;
	cout<<"double--> \t" <<sizeof(double)<<endl;
	cout<<"char-->\t" <<sizeof(char)<<endl;
	cout<<"float-->\t" <<sizeof(float)<<endl;
	cout<<"Long long int --> \t"<<sizeof(long long int)<<endl;
	cout<<"Struct size --> : "<<sizeof(student)<<endl;
	return 0;
}
