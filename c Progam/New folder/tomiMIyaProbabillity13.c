#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fact(int n);
int main()

{
    char lin[2100];
    int n,r,j,count=0;
    int ret,cr=0,t,o,sum;

 scanf("%[^\n]s",lin);


        for(j=0;lin[j]!='\0';j++)
            {

            if(lin[j]==' ')
                {
                    count++;
                    }
             ret=(lin,lin);
        if(ret==0)
        {
            cr++;
            printf("Compare is %d\n",cr);
        }

        }
         sum=count+1;
        t=fact(sum);
        o=fact(cr);
        r=t/o;

printf("result is =1/%d count is =%d\n",r,o);



    return 0;
}
int fact(int n)
{
    int i;
    unsigned long long f=1;
    for (i=1;i<=n;++i)
    {
        f=f*i;
    }

    return f;
}
