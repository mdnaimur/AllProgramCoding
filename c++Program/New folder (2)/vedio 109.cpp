#include<iostream>
using namespace std;

ostream &rightName(ostream &output)
{
	output<<"Your say your name ----> ";
	return output;
}
istream &getName(istream &input)
{
	cout<<"Enter your name please "<<endl;
	return input;
}

int main()
{
	string name;
	cin>>getName>>name;
	cout<<rightName<<name;
	
	
	return 0;
}
