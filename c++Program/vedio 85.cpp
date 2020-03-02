#include<iostream>
#include<string>
using namespace std;
void student();
int main()
{
	student();
	return 0;
}
void student()
{
	class list{
		public:
		string name;
		int age;
		void display()
		{
			cout<<"My name is " <<name<<endl<<"My age is "<<age;
		}
	};
	list naimur;
	naimur.name="Md Naimur Rahman";
	
	naimur.age=25;
	
	naimur.display();
}
