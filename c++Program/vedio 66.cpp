#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		string name;
		int age;
		void sename(string iname){name=iname;
		}
		void seage(int igae)
		{
			age=igae;
		}
};
class student :public person{
public:
	int id;
	void seid(int iid){
		id=iid;
	}
	void introduce(){
		cout<<"My name is "<<name<<endl<<"and my age "<< age<<" years old"<<endl<<"My id number is "<<id<<endl;
	}
};
int main()
{
	student naimur;
	naimur.sename("Md Naimur Rahman");
	naimur.seage(25);
	naimur.seid(315151004);
	naimur.introduce();
	return 0;
}
