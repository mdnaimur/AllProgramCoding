#include<iostream>
using namespace std;
int main()
{
	int a;
	a=10;
	LOOP:do
	{
		if(a==15)
		{
			a++;
			goto LOOP;
		}
		cout<<"value of a: "<<a<<endl;
		a++;
		
	}
	while (a<30);
	return 0;
}
