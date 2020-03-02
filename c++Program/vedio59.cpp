#include<iostream>
#include<string>
using namespace std;
class human{
	
	private:
	int age;
	string name;
	public:
		human()
		{
			cout<<"Dafult construction "<<endl;
			age=0;
			name="noName";
		}
		human(string iname){
			cout<<"Constructure with name as a parametr "<<endl;
			age=0;
			name=iname;
		}
		human(int iage)
		{
			cout<<"Constructure wiht age as a parameter "<<endl;
			age=iage;
			name="NoName";
		}
		human(string iname,int agee)
		{
			cout<<"Constructur with age and name :"<<endl;
			name=iname;
			age=agee;
		}
		void dis(){
			cout<<name<<endl<<age<<endl;
		}
		
};
int main()
{
	human naimur;
	naimur.dis();
	human rhaman("MdNaimurRhaman",25);
	rhaman.dis();
	
	return 0;
}
