#include<stdio.h>
int main()
{
int x=0,a, b, c,d ,e,f;
char ar[5][10]={{""}, {"he"},{"to"},{"to"},{"school"},} ;

for (a = 1; a <= 4; a++) {
for (b = 1; b <= 4; b++) {
for (c = 1; c <= 4; c++) {
for (d= 1; d<= 4; d++){
if(b != a && c != a && c != b&&d!=a&&d!=b&&d!=c) {
x++;
printf ("%dth: %s, %s, %s %s\n",x, ar[a] , ar[b] , ar[c] ,ar[d] );
}
}
}
}
}
return 0;
}
