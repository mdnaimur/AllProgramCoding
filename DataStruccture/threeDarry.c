#include<stdio.h>
int main()
{
    int c[3][2][2]={{{3,2},{5,6}},{{12,23},{2,4}},{{7,4},{8,9}}};
    printf("%d %d %d %d\n",c,*c,c[0],&c[0][0]);
    printf("%d\n",*(c[2][1]+0));

    return 0;
}
