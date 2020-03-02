#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char fl[10002],sd[2];
    int i,count,t;
   scanf("%d",&t);

while(t--)
 {

 getchar();
        count=0;
        scanf("%[^\n]", fl);
          scanf("%s", sd);

     for(i=0;i<strlen(fl);i++)
    {

        if(sd[0]==fl[i]||sd[0]-32==fl[i]||sd[0]+32==fl[i])
        {

            count++;

        }

    }

    if(count==0)
    {
        printf("'%c'is not present\n",sd[0]);

    }

    else{
            printf("Occurrence of '%c' in '%s' = %d\n",sd[0],fl,count);

    }
    }

    return 0;
}
