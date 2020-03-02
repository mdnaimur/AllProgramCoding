#include <string.h>
#include <stdio.h>

int main()
{
   char str[80];
   const char s[2] = "-";
   char *token;

   scanf(" %[^\n]",str);

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL )
   {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

   return(0);
}
