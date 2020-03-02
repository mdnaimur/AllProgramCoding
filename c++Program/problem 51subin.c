#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[200],st[200];
   int i,j,len1,len2,t;

    gets(str);
    gets(st);
    len1=strlen(str);
    len2=strlen(st);
    for(i=0;i<len1-len2;i++)
    {
        if(st[0]==str[i])
        {
            for(j=0;j<len2;j++)
            {
                if(st[j]!=str[i+j]) break;
            }
            if(j==len2)
            {
                printf("%d\n",i);
            }

        }
    }

return 0;
}
