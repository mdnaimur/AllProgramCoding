#include<iostream>
#include<string>

using namespace std;
class human{
	
	private:
		string name;
		int age;
	public :
	 human()
	 {
	 	cout<<"Defalut Constructor "<<endl;
	 	name="NoName";
	 	age=0;
		 }	
		 human(string iname,int iage=0)
		 {
		 	cout<<"Overload constructor "<<endl;
		 	cout<<iname<<endl<<iage<<endl;
		 	name=iname;
		 	age=iage;
		 }
		 void dis()
		 {
		 	cout<<name<<endl<<age<<endl;
		 }
};
int main()
{
	human naimur("MdNiamur");
	naimur.dis();
	
	return 0;
	
}

