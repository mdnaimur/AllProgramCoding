#include<iostream>
using namespace std;
class human{
	
	public:
		static int nm;
		human()
		{
			nm++;
		}
		void dis()
		{
			cout<<"there are " <<nm<<" people in here display"<<endl;
		}
		static void humnac()
		{
			cout<<"There are " <<nm<<" people are in this program."<<endl;
		}
		
};
int human::nm=0;
int main()
{
cout<<human::nm<<endl;
human naimur;
human md;
human rhaman;
human dalim;
human muslim;
naimur.dis();
human::humnac(); 
cout<<human::nm<<endl;

	
	return 0;
}
/**void display()
{
	static int counter=0;
	
	cout<<"Display function called "<<++counter<<" times"<<endl;
}**/
