#include<iostream>
#include<string>
using namespace std;
class human
{
	private:
		string *name;
		int *age;
	public:
		human(string iname,int iage)
		{
			name=new string;
			age =new int;
			*name=iname;
			*age=iage;
		}
		void display()
		{
			cout<<"I am " <<*name<<" and my age "<<*age<<" Years old"<<endl;
			
		}
	~human()
		{
			delete name;
			delete age;
			cout<<"Memory is released"<<endl;
		}
};

int main()
{
	human *naimur=new human("Md Naimur Rahman",25);
	naimur->display();
	delete naimur;
}
