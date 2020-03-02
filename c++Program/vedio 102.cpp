#include<iostream>
#include<string>
using namespace std;
class Person{
	string name;
	int age;
	public:
		Person()
		{
			name="No name";
			age=0;
		}
		friend ostream &operator<<(ostream &output,Person &p);
		friend iostream &operator>>(iostream &input,Person &p);
};
ostream &operator<<(ostream &output,Person &p)
{
	output<<"what the hack"<<endl;
	output<<"My name is "<<p.name<<" My is  "<<p.age<<endl;
	return output;
}
iostream &operator>>(iostream &input,Person &p){

	input>>p.name>>p.age;
	return input;
}

int main()
{
	cout<<"enter the name and age "<<endl;
	Person dalim;
	cin>>;
	cout<<dalim;


	return 0;
}
