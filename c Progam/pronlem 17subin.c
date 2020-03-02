#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char strn[10002];
    int t,i,count,len;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf(" %[^\n]",strn);
        len=strlen(strn);
        for(i=0;i<len;i++)
        {
            if(strn[i]=='a'||strn[i]=='e'||strn[i]=='i'||strn[i]=='o'||strn[i]=='u'||strn[i]=='A'||strn[i]=='E'||strn[i]=='I'||strn[i]=='O'||strn[i]=='U')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n",count);
    }
    return 0;
}
