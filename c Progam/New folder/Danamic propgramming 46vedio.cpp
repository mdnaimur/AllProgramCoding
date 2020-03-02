#include<iostream>
using namespace std;
int main()
{
	int *pointer=NULL;
	cout<<"How many elecment you are gonna entered"<<endl;
	int input;
	cin>>input;
	pointer=new int(input);
	int temp;
	for(int counter=0;counter<input;counter++)
	{
		cout<<"Enter then item " <<counter+1<<endl;
		cin>>temp;
		*(pointer+counter)=temp;
	}
	cout<<"The item you are entered are " <<endl;
	for(int counter=0;counter<input;counter++)
	{
		cout<< counter+1  << " :Item is : "<<*(pointer+counter)<<endl;
	
	}
	delete []pointer;
	
	return 0;
}
