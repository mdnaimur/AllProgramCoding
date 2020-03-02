#include<iostream>
#include<string>
using namespace std;
class human{
	
	public:
		string name;
		void intru();
};

void human::intru(){
	cout<<"I am "<<human::name <<endl;
}
int main()
{
	human a;
	cin>>a.name;
	a.intru();
}
