#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=2;i<=10;i++)
	{
		for(j=2;j<=i/j;j++)
		
			if(!(i%j)) break;
			if (j>i/j) cout<<i<<" :is prime"<<endl;
		
	}
return 0;
}

