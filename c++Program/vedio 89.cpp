#include<iostream>
using namespace std;

class Marks{
	
	int mark;
	public:
		Marks()
		{
			mark=0;
		}
		Marks(int m)
	{
		mark=m;
	}
	void show()
	{
		cout<<"Your marks is "<<mark<<endl;
	}
	Marks operator++(int)
	{
		Marks dublicate(*this);
		mark+=2;
		return dublicate;
	}
	friend Marks operator--(Marks&,int);
};

Marks operator--(Marks &m,int)
{
	Marks dubicate(m);
	m.mark-=1;
	return m;
}
int main()
{
	Marks naimur(87);
	naimur.show();

	(naimur++).show();
	
	(naimur++).show();

	(naimur--).show();
	
	return 0;
}
