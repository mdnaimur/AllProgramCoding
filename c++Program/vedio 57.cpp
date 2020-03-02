#include<iostream>
using namespace std;
class human{
	
	private:
		int age;
		int get()
		{
			return age-5;
		}
		
		public:
			void dis()
			{
				cout<<"My age is : "<<get()<<endl;
			}
			void setage(int value)
			{
				age=value;
			}
};
int main()
{
	human naimur;
	naimur.setage(25);
naimur.dis();
	
	return 0;
}
