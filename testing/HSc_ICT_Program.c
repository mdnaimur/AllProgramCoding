#include<stdio.h>

int main()
{
    int a,b,c;

    int sum;
    float avg;
    printf("Kawsar is now programmer \n");
    printf("Enter three integer value\n");
    scanf("%d%d%d",&a,&b,&c);
    //printf("value of a:%d\n b:%d\n c:%d",a,b,c);
    sum=a+b+c;
    avg=(float)sum/3;
    printf("The summation is :%d\n",sum);
    printf("Average is :%f\n",avg);

    return 0;

}
