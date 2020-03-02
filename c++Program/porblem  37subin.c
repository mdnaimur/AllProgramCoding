#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[2001];
    int i,j,t;
    int len;
    scanf("%d",&t);
    while(t!=0)
    {
       gets(str);
    len=strlen(str)-1;

        for(j=len;j>=0;j--)
        {
             printf("%c",str[j]);

        }
    printf("\n");
    }



    return 0;
}
