#include<stdio.h>

int main()
{
    int T,Rank,temp,i,Url[10];
	char pages[100][100];
	scanf("%d",&T);
	for(temp=1;temp<=T;temp++)
	{
	    Rank=-1
		for(i=0;i<10;i++)
		{
			scanf("%s %d",&pages[i],&Url[i]);
			if(Url[i]>=Rank) Rank=Url[i];
		}
		printf("Case #%d :\n",temp);
		for(i=0;i<10;i++)

		if(Url[i]==Rank)
		printf("%s\n",pages[i]);

	}
	return 0;

}
