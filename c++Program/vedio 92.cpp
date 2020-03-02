#include<iostream>
using namespace std;

class Marks{
//	int mark;
	public:
		int mark;
		Marks(int m)
		{
			cout<<"I am constrector "<<endl;
			//mark=m;
		}
		void show(){
			cout<<"Hey i got "<<mark<<" Marks "<<endl;
		}
		Marks operator()(int mk)
		{
			cout<<"I am operator "<<endl;
		//	mark=mk;
			return *this;
		}
	
};

int main()
{
	Marks naimur(91);
	naimur.show();
	naimur(88);
	naimur.show();
}
