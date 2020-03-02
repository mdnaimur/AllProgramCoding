#include<stdio.h>
int main()
{
    int a=1025;
    int *p;
    p=&a;
    printf("size of integer value is: %d",sizeof(int));
    printf("\nAddress of Pointer :%d and value is :%d\n",p,*p);
char* ch;
ch=(char*)p;
printf("Size of char value is %d\n",sizeof(char));
printf("Address of char is: %d and value: %d\n\n",ch,*ch);

}
