#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[1002];
    int t,i,count;
  scanf("%d",&t);
    while(t--)
   {
       count=0;
        scanf(" %[^\n]",s);

        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]==' ')
            {
                count++;
            }

        }
         printf("Count = %d\n",count+1);
    }
    return 0;
}
