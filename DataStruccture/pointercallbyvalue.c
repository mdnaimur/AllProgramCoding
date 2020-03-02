#include<stdio.h>
void inc(int *a)
{
    *a=*a+1;
    printf("In Function %d\n",&a);
    //return a;
}
int main()
{
    int a;
    a=10;
    inc(&a);
    printf("%d\n",a);
    return 0;
}
