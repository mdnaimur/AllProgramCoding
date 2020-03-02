#include<stdio.h>
int main()
{
   char input[10003];
   int i;
   fopen("input.txt","r");
   while(gets(input))
   {
       for(i=0;input[i];i++)
       {
           printf("%c",input[i]);
       }
       printf("\n");
   }
   return 0;
}
