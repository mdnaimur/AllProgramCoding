#include<iostream>
#include<string>
using namespace std;
class human{
	public:
		string name;
		void intruduce()
		{
			cout<<"Hi !I am "<<name<<endl;
		}
};
int main()
{
	human a;
	cin>>a.name;
	a.intruduce();
	human b;
	cin>>b.name;
	b.intruduce();
	
	return 0;
}
