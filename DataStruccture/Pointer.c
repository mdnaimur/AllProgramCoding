#include<stdio.h>
int main()
{
    int a;
    int *p;
    a=9;
    p=&a;
    printf("P address is:%d\n",p);
    printf("P value is:%d\n",*p);
    printf("a address is:%d\n",&a);
    *p=19;
    printf("a value is:%d\n",a);
    int b=10;
    *p=b;
    printf("P address is:%d\n",p);
    printf("P value is:%d\n",*p);
    printf("after b then a value is:%d\n",a);
    return 0;

}
