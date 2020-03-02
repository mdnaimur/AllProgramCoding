#include<iostream>
using namespace std;

namespace {
	int x;
	namespace{
		void dispaly()
		{
			cout<<"Value of nested Namespace is " <<x<<endl;
		}
	}
}

int main()
{
	x=100;
	dispaly();
	
	return 0;
}
