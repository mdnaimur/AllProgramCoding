#include <stdio.h>
#include <string.h>
#include <conio.h>
int main (){
char string [50];
printf ("Enter value to be identified: ");
scanf ("%s", string);
int length = strlen (string) - 1;
bool alpha_string = false;
if ( string [0] >= 'A' && string [0] <= 'Z' )
alpha_string = true;
if ( string [0] >= 'a' && string [0] <= 'z' )
alpha_string = true;
bool underScore = true;
if ( string [length] == '_' )
underScore = false;
int num = 0;
for ( int i = 1; i <= length; i++ ) {
if ( string [i] == '_' )
num++;
else
num = 0;
if ( num == 2 ) {
underScore = false;
break;
}}
if ( alpha_string && underScore)
printf ("Answer: %s is a valid identifier\n", string);
else
printf ("Answer: %s is not a valid identifier\n", string);
getch();
}


