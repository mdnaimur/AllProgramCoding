#include<stdio.h>
int main()
{
    int ara[20],n,i;
    int previous,current,t;
    scanf("%d",&t);
while(t--)
{

    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        scanf("%d",&ara[i]);
            i++;
    }

previous=ara[0];

    for(i=0;i<n;i++)
    {

       current=ara[i];
       if(current>=previous)
       {
           previous=current;
       }
       else{break;}
    }

        if(current>=previous)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");

    }
    }

    return 0;

}
