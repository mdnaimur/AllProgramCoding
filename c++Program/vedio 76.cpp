#include<iostream>
using namespace std;

class person{
	public:
		void intru()
		{
			cout<<"Base class is called"<<endl;
		}
};

class student:public person{
	
	public:
		void intru()
		{
			cout<<"Sub class or derived class is called"<<endl;
			person::intru();
		}
};

int main()
{
	student naimur;
	naimur.intru();
	naimur.person::intru();
	
	return 0;
}
