#include <stdio.h>
#include <ctype.h>

int lower(int);

int main()
    {
    char string1[] = "ASCII";
    char string2[] = "ASCII";
    size_t index;

    printf("        lower    tolower\n");
    printf("Before: 1[%s] 2[%s]\n", string1, string2);  

    for(index=0; string1[index]; ++index)
       string1[index] = lower(string1[index]);

    for(index=0; string2[index]; ++index)
       string2[index] = tolower(string2[index]);

    printf("After.: 1[%s] 2[%s]\n", string1, string2);

    return(0);
    }


int lower(int c)
   {
   if(c >= 'A' && c <= 'Z')
      {
      return c + 'a' - 'A';
      } 
   else 
      {
      return c;
      }
   }
