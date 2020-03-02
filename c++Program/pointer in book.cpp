#include<iostream>
using namespace std;
int high=5;
int main()
{
	int var[high]={20,63,26,84,56};
	int *ptr[high];
	
	for(int i=0;i<=high;i++)
	{
		ptr[i]=&var[i];	
	}
	for(int i=0;i<=high;i++)
	{
		cout<<"Value of var is var["<<i<<"] = "<<var[i]<<endl;
		cout<<"Value of pointer after inluding ptr-->var["<<i<<"]= "<<*ptr[i]<<endl;
	}
	
		cout<<"Value of pointer after inluding ptr-->var["<<high<<"]= "<<*ptr[high]<<endl;
	return 0;
}
