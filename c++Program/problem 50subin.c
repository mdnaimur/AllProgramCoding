#include<stdio.h>
#include<stdlib.h>
int main()
{
 char str[1001];
 int i,t,len;
 scanf("%d",&t);
 while(t--)
 {
   gets(str);
  len=strlen(str);
 for(i=0;i<=len;i++)
 {
     if(str[i]=='L')
     {
         str[i]=str[i-1];
     }

     if(str[i]=='R')
     {
         str[i]=str[i+1];
     }
 }
 printf("%s",str);
 printf("\n");

 }

 return 0;
}
