#include<iostream>
using namespace std;

class human{
	
	public:
		human()
		{
			cout<<"Consruction is called"<<endl;
			
		}
		~human()
		{
			cout<<"Desruction is called"<<endl;
		}
};
int main()
{
	human *naimur;
	naimur=new human();
	delete naimur;
}
