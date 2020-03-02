#include<iostream>
#include<stdexcept>
using namespace std;
int man()
{
	try{

		throw runtime_error("Some erroe found");
	//throw 20;
	}
	catch(...)
	{
		cout<<"Some Exception"<<endl;
	}
	return 0;
}
