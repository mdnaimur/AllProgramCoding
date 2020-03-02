#include<iostream>
using namespace std;
int max = 5;
int main()
{

	int var [max] = {20,30,40,50,60};
	int *ptr;
	ptr=var;
	int i=0;
	while(i<max){
		cout<<"Adress of var["<<i<<"]= "<<ptr<<endl;
		cout<<"Value of var["<<i<<"]= "<<*ptr<<endl;
		ptr++;
		i++;
	}

	return 0;
}
