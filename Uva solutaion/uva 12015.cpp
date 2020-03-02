#include<iostream>
using namespace std;

int main()
{
	int T,Rank,temp,i,Url[10];
	char pages[100][100];
	cin>>T;
	for(temp=1;temp<=T;temp++)
	{
		Rank=-1;
		for(i=0;i<10;i++)
		{
			cin>>pages[i]>>Url[i];
			if(Url[i]>=Rank) Rank=Url[i];
		}
		cout<<"Case #"<<temp<<":"<<endl;
		for(i=0;i<10;i++)
		
		if(Url[i]==Rank)
		cout<<pages[i]<<endl;
	    
	}
	return 0;
}
