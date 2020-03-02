#include<stdio.h>

int main()
{
    int odd[21],even[21];
    int n,i,j,t;
     scanf("%d",&n);
     printf("\n\n");
     even[0]=1;
     even[1]=1;
     for(i=0;i<=n;i++)
     {
         if(i%2==0){
            even[0]=1;
            printf("  %d\n",even[0]);

            for(j=1;j<i-1;j++)
            {
                even[j]=odd[j-1]+odd[j];
                printf("  %d",even[j]);

            }
            even[j]=1;

         }

         else{

            odd[0]=1;
             printf("  %d",odd[0]);

            for(j=1;j<i-1;j++)
            {
                odd[j]=even[j-1]+even[j];
                 printf("  %d",odd[j]);

            }
            odd[j]=1;
         }
     }


     return 0;
}
