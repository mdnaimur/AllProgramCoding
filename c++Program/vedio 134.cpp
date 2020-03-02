#include<iostream>
using namespace std;
 template <class type1, class type2> class myclass{
 type1 p;
 type2 q;
 int counter;
 public:
 	
 	myclass(type1 x,type2 y)
 	{
 		p=x;
 		q=y;
 		counter++;
	 }
	 
	 void print()
	 {
	 	cout<<"type1 value is : "<<p<<" type2 value is : "<<q<<endl;
	 	cout<<"Counter is : "<<counter<<endl;
	 }
 
 
 };
 
 int main()
 {
 	myclass <int,string> ont(25,"Md Naimur Rahman");
 	ont.print();
 	//cout<<"Second one is "<<endl<<endl;
 	system("PAUSE");
 	myclass<string,string> otn("Dalim","Puspo");
 	otn.print();
 	return 0;
 }
