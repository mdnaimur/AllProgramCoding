#include<stdio.h>
int main()
{
    int i,j,n,found,num,sum=0,get=0;
    printf("Input size of number : ");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        //found=0;
         scanf("%d",&num);
          sum+=num;


    }
     printf("sum is %d\n",sum);
     for(i=1;i<=n;i++)
          {
              get+=i;

          }
          printf("Get is %d\n",get);
          if(get!=sum)
          {
              j=get-sum;
              printf("Missing number is %d\n",j);
          }


    return 0;
}
