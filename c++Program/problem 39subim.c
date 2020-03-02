#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ara[1000],arr[1000],temp[1001];
	int n,t,j,i,len,Temp;
scanf("%d",&n);
while(n--)	{

	scanf("%s",ara);

	/*len=strlen(ara);

	for(i=len-1;i>=0;i--)
	{
		arr[j]=ara[i];
		printf("%c",arr[j]);

	}*/
	strcpy(arr,ara);
	strrev(arr);
    if(strcmp(ara,arr)==0)
	 {
		printf("Yes! it is Palindrom!\n");
	}
	else
	{
		printf("Sorry! it is not Palindrome\n");
	}
}

	return 0;
}

