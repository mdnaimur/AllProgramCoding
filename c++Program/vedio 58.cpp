#include<iostream>
#include<string>
using namespace std;
class human{
	private:
		string name;
		int age;
	public:
	human()
	{
		name="NoName";
		age=0;
		cout<<"Construction is created\n";
	}
	void dis(){
		cout<<name<<endl<<age<<endl;
	}
};
int main()
{
	human naimur;
	naimur.dis();
	
	return 0;
}
