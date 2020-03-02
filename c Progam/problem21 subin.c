#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int t,i;
	char str[1000];
	scanf("%d",&t);
	while(t--)
		{
			scanf(" %[^\n]",str);
			int len=strlen(str);

			for(i=len;i>=0;i--){
				printf("%c",str[i-1]);
			}
			printf("\n");

		}
		return 0;
}
