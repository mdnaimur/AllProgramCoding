#include<iostream>
using namespace std;

template <class type=string,class types=int> class Myclass{

type p;
types q;
public:
	Myclass(type x,types y)
	{
		p=x;
		q=y;
	}
	void output()
	{
		cout<<"Output value is : "<<p<<" And : "<<q<<endl;
	}
};
int main()
{
	Myclass<> ob("Md Naimur Rahman",25);
	ob.output();
	Myclass<float> on(24.6,26);
	on.output();
	Myclass<int,string> to(02,"Puspo");
	to.output();
	
	return 0;
	
}
