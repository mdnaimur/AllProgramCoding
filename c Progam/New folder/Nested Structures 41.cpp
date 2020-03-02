#include<iostream>
#include<string>
using namespace std;

struct address{
	int houseNo;
	string stree_name;
};
struct student{
	string name;
	int roll;
	address adr;
};
int main()
{
	student naimur;
	cout<<"Enter The student Information\n";
cin>>naimur.name ;
cin>>naimur.roll;
cin>>naimur.adr.houseNo;
cin>>naimur.adr.stree_name;
cout<<endl;
cout<<"Stuernt Information is :\n\n\n";
   cout<<"Name         :\t"<<naimur.name<<endl;
   cout<<"ID           :\t"<<naimur.roll<<endl;
   cout<<"House No     :\t"<<naimur.adr.houseNo<<endl;
   cout<<"Village name :\t"<<naimur.adr.stree_name<<endl;
   
   return 0;


}
