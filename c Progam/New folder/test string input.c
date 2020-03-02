/*
 * C Program to Count Number of Words in a given Text Or Sentence
 */
#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count = 0, i;

    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 1;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;
    }
    printf("number of %s: words in given string are: %d\n",s, count+1);
}
