#include<iostream>
#include<string>
using namespace std;

class person{
	
	public:
		string name;
		class type{
			
			public:
				string location;
				string addres;
				int hno;
		};
		type adr;
		void display()
		{
			cout<<"Name is : " <<name<<"\tLocation is : "<<adr.location<<"\tRoad name : " <<adr.addres<<"\tHouse no : "<<adr.hno<<endl;
		}
};

int main()
{
	person::type adr;
	person naimur;
	/*naimur.name="Md Naimur Rahman";
	naimur.adr.location="Banglades";
	naimur.adr.addres="Dhaka";
	naimur.adr.hno=240;*/
	naimur.display();
	return 0;
}
