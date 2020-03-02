#include<iostream>
using namespace std;

class person{
	
	public:
	virtual	void introduction()
		{
			cout<<"I am persona and i am Base class!!"<<endl;
		}
};

class student:public person{
	
	public:
		void introduction()
		{
			cout<<"I am student and i am inherint in person class !"<<endl;
		}
};

class farmar: public person{
	
	public:
		void introduction()
		{
			cout<<"I am frammer i am also inherent to person class !"<<endl;
		}
};
void dispaly(person &p)
{
	p.introduction();
}
int main()
{
	farmar naimur;
	student dalim;
	dispaly(naimur);
	dispaly(dalim);	
	return 0;
	
}
