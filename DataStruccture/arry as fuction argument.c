#include<stdio.h>
int sumarr(int a[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{


    int A[]={1,2,3,4,5};
int size=sizeof(A)/sizeof(A[1]);
printf("size of :%d\n",size);
int total=sumarr(A,size);
printf("%d",total);
return 0;
}
