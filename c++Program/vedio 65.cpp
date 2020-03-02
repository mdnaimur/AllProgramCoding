#include<iostream>
#include<string>
using namespace std;
class human{
	string name;
	int age;
	
	public :
		human(string iname,int iage){
			name=iname;
			age=iage;
		}
		void tellme(){
			cout<<name<<endl<<age<<endl;
		}
		friend void display(human man);
};

void display(human man){
	cout<<"Frined function call "<<man.name<<endl<<man.age;
}
	int main()
	{
	
	{
		human naimur("MD NAIMUR RAHMAN",25);
		display(naimur);
		
		return 0;
	}
}
