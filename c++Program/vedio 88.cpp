#include<iostream>
using namespace std;

class Marks{
	int mark;
	public:
		Mark()
		{
			mark=0;
		}
	Marks(int m)
	{
		mark=m;
	}
	void displayMark()
	{
		cout<<"Your marks is " <<mark<<endl;
	}
	void operator +=(int bonas)
	{
		mark=mark+bonas;
	}
	friend void operator-=(Marks &oj, int redmark);

};
void operator-=(Marks &oj, int redmark){
	oj.mark-=redmark;
}


int main()
{

	int m;
	cout<<"Enter the value you want to add"<<endl;
	cin>>m;
	Marks naimur(m);
	naimur.displayMark();
	cout<<"Enter add value"<<endl;
	int x;
	cin>>x;
	naimur+=x;
	cout<<"After add then result : ";
	naimur.displayMark();
	cout<<endl;
		naimur-=x;	cout<<"After substration then result : ";
	naimur.displayMark();
	cout<<endl;

	return 0;


}
