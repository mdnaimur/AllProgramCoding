#include<stdio.h>
int main()
{
 int num[100],t,i,n;

 scanf("%d",&t);
 while(t--)
 {
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&num[i]);
     }
     for(i=0;i<n;i=i+2)
     {
         printf("%d",num[i]);
         printf(" ");
     }
     printf("\n");
 }
 return 0;
}
