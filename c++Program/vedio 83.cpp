#include<iostream>
using namespace std;

class animal{
	
	public:
		animal()
		{
			cout<<"Animal is called"<<endl;
		}
		int age;
		void walk()
		{
			cout<<"Animal can walk"<<endl;
		}
};
class tiger:virtual public animal{
	public:
		tiger()
		{
			cout<<"tiger is called"<<endl;
		}

		
};
class lion:virtual public animal{
	public:
		lion()
		{
			cout<<"Lion friend is called"<<endl;
		}
};
class tigger:public tiger,public lion{
	public:
		tigger()
		{
			cout<<"Tiger childern is called"<<endl;
		}
	
};
int main()
{
	tigger naimur;
	naimur.walk();
	
	return 0;
}

