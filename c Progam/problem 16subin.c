#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char str[])
{
    int i,j,k,len;
    char word[3222],s[10002];

    len=strlen(str)-1;
    for(i=len;i>=0;i--)
    {
       for(k=0;k<len;)
       {
        if(str[i]==str[i])
          {

               word[k]=s[i];
               k++;

          }
          else if(k>0)
          {
              word[k]='\0';

              k=0;

          }
          if(k>0)
          {
              word[k]='\0';


          }
           printf(" ");
       }


printf("%c\n",word[k]);
    }
}

int main()
{
   int t,i,len,j,k;
   char s[2001],word[1002];
   scanf("%d",&t);

   for(i=0;i<t;i++)
   {
       //gets(s);
       scanf(" %[^\n]",s);
      // printf("%s\n",s);
      len=strlen(s);
      for(j=0,k=0;j<len;j++)
      {
          if(s[j]!=' ')
          {
               word[k]=s[j];
               k++;

          }
          else if(k>0)
          {
              word[k]='\0';

              k=0;

          }
          if(k>0)
          {
              word[k]='\0';
                  //printf("is main function code : %s\n",word);
                   reverse(word);

          }


      }

   }
   return 0;

}
