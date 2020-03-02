#include<iostream>
using namespace std;

struct student{
	int roll;
	char sex;
	int age;
    };
void display(student s);
void show(student *s);


int main()
{
	student rahim={213,'m',24};
	display(rahim);
	show(&rahim);
	return 0;
}
void display(student s)
{
	cout<<s.roll<<endl;
	cout<<s.age<<endl;
	cout<<s.sex<<endl;
}
void show(student *s)
{
	cout<<s->roll<<endl;
	cout<<s->age<<endl;
	cout<<s->sex<<endl;
}
