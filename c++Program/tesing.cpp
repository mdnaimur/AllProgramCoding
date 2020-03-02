#include<iostream>
using namespace std;
const int maX = 5;
int main()
{
	
	int var [maX] = {20,30,40,50,60};
	int *ptr;
	ptr=var;
	int i=0;
	while(ptr<=&var[maX-1]){
		cout<<"Adress of var["<<i<<"]= "<<ptr<<endl;
		cout<<"Value of var["<<i<<"]= "<<*ptr<<endl;
		ptr++;
		i++;
	}
	
	return 0; 
}
