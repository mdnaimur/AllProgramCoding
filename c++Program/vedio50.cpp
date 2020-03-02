#include<iostream>
#include<string>

using namespace std;
int main()
{
	string name;
	string lastname;
	cin>>name>>lastname;
	string fullname;
	fullname=name+" "+lastname;
	cout<<name<<"  "<<lastname<<endl<<fullname<<endl;
	
	if(name!="naimur")
	cout<<"name is not match";
	else
	cout<<"Name match";
	
	return 0;
}
