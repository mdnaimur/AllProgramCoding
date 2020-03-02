#include<iostream>
#include<string>
using namespace std;
class juman{
	public:
	string name;
	void instruction(){
	
	cout<<"Hi ! My name is "<<name<<endl;
	}
	
};
int main()
{
	juman n;

	juman *a=new juman();
	cout<<"Enter your value name : ";
	cin>>n.name;
	n.instruction();
	cout<<"Enter your pointer name :"<<endl;
	cin>>a->name;
	a->instruction();
	
	return 0;
}
