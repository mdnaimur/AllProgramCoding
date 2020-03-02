#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m;
	cout<<"What is you name? \n";
	getline(cin, m);
	cout<<"Hello! "<<m<<".\n";
	cout<<"What is your Favorite team? \n";
	getline(cin,m);
	cout<<"I like "<< m <<" too!!\n";
		cout<<"Do Have any question? \n";
	getline(cin,m);
		cout<<"I like your question "<< m <<" Pealse Exaplane in details!!\n";
	
	
	return 0;
}
