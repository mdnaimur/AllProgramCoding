#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int person,budget,hotel,week,cost,bed;
	int i,total,j,finalAmount;
while(scanf("%d %d %d %d",&person,&budget,&hotel,&week)==4)
{
	finalAmount=budget+1;
	for(i=0;i<hotel;i++)
	{
		cin>>cost;
		for(j=0;j<week;j++)
		{
			total=0;
			cin>>bed;
			if(person<=bed)
			{
				total=cost*person;
				if(finalAmount>=total)
				{
					finalAmount=total;
				}
			}
		}
	}
	if(budget>=finalAmount)cout<<finalAmount<<endl;
	else
	cout<<"stay home"<<endl;
  }
	
	return 0;
}
