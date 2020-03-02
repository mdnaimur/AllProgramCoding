#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int count[26]={0};
    char firstLine[10020];
    int i;
    scanf("%s",firstLine);


    for(i=0;i<strlen(firstLine);i++)
    {

        if(firstLine[i]>= 'a' && firstLine[i]<='z')
    {
        count[firstLine[i]-'a']++;
    }

        if(firstLine[i]>= 'A' && firstLine[i]<='Z')
    {
        count[firstLine[i]-'A']++;
    }

    }

    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            printf("%c = %d\n",'a'+i,count[i]);
        }
    }
    return 0;
}
