#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string *name;
		int age;
		Person(string name,int age)
		{
			this->name=new string (name);
			this->age=age;
		}
		Person(const Person &p)
		{
			name=new string(*p.name);
			age=p.age;
		}
		void chagename(string name,int age)
		{
			*(this->name)=name;
			this->age=age;
		}
		void show()
		{
			cout<<"I am "<<*name<<" and my age is "<<age<<endl;
		}
};

int main()
{
	Person naimur("Md Naimur Rahman",25);
	naimur.show();
	
	Person dublicate=naimur;
	dublicate.show();
	naimur.chagename("Dalim",24);
	naimur.show();
	dublicate.show();
	return 0;
}
