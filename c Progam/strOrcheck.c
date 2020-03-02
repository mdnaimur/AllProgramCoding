/* Using the strncpy() function. */
#include <stdio.h>
#include <string.h>
char dest[] = "..........................";
char source[] = "abcdefghijklmnopqrstuvwxyz";
main()
{
size_t n;
while (1)
{
puts("Enter the number of characters to copy (1-26)");
scanf("%d", &n);
if (n > 0 && n< 27)
break;
}
printf("\nBefore strncpy destination = %s", dest);
strncpy(dest, source, n);

printf("\nAfter strncpy destination = %s\n", dest);
return(0);
}
