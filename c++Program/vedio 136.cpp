#include<iostream>
using namespace std;

template <class type> class Myclass{
type p;
public:
	Myclass(type x)
	{
		cout<<"From generic class constructor "<<endl;
		p=x;
	}
	void output()
	{
		cout<<"Output value "<<p<<endl;
	}

};
template<> class Myclass<int>{
	
	int p;
public:
	Myclass(int x)
	{
		cout<<"From derive class constructor "<<endl;
		p=x;
	}
	void output()
	{
		cout<<"Output value "<<p<<endl;
	}


};

int main()
{
	Myclass <int>on(14);
	Myclass <string> of("Md Naimur Rahman");
	
	of.output();
	on.output();
	return 0;
}
