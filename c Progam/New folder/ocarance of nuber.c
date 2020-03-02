#include "conio.h"
#include "stdio.h"

void main()
{
  int num,i,n,k;
  printf("\nEnter a number : ");
  scanf("%d",&num);
  n=num;
  i=0;
  while(n!=0)
  {
  k=n%10;
  n=n/10;
  if(k==4)
  {
  i++;
  }
  }
  printf("\nThe occurrence of 4 is %d times",i);
getch();
}
