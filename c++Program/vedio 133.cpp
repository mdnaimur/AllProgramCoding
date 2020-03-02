#include<iostream>
using namespace std;
template<typename Name>class Object{
Name p;
Name q;
public:
	
Object (Name x, Name y)
	{
		p=x;
		q=y;
	}
	void whos()
	{
		cout<<"This is p= "<<p<<"\n and q= "<<q<<endl;
	}

};

int main()
{
	Object<int> intfis(21,23);
	Object<string> strifst("Md Naimur Rahman +"," Puspo");
	
  intfis.whos();
  strifst.whos();
}

