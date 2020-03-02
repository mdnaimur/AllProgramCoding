#include<stdio.h>
int main()
{

int a[5];
int i;
int *p = a; // make p point to a[0]
for ( i = 0; i < 5; i++) {
    printf("element %d is %d : %d\n", i, *p,a);
    p++; // make `p` point to the next element
}
}
