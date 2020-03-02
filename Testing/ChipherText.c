#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[30],k[27],c[30];
    int i, index;

printf("Enter plain text: ");
gets(s);
printf("\nEnter key with 26 character:");
    for(i=0;i<26;i++)
    {
    printf("\n%c",i+97);
    k[i]=getch();
        printf("%c",k[i]);
        }
    for(i=0;i<strlen(s);i++)
    {
    index=s[i]-97;
        c[i]=k[index];
           }
    printf("Your cipher text is:");
    for(i=0;i<strlen(s);i++)
    {
        printf("%c",c[i]);
        }
        getch();
      }
