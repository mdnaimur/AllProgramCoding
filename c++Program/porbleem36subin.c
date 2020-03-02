#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  main()
{
    char ara[100][100];
    char temp[20];
    int t,i,n,j;
    scanf("%d",&n);
   for(i=0;i<n;i++)
    {

        scanf("%s",ara[i]);

    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(strcmp(ara[i],ara[j])>0)
            {
                strcpy(temp,ara[i]);
                strcpy(ara[i],ara[j]);
                strcpy(ara[j],temp);
           }

        }
    }

    printf("\n");
for(i=0;i<n;i++)
    {

          printf("%s",ara[i]);
          printf("\n");
    }

return 0;
}
