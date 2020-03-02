#include<stdio.h>
#include<math.h>
int f(n) {
   while (n >= 10) {
      n = sod(n);
   }
   return n;
}
int sod(p)

{
    int sum=0,rem;
    while(p!=0)
    {
        rem=p%10;
        sum=sum+rem;
        p/=10;
    }
    return sum;
}
void main()
{
    unsigned  long long int a,b,r;
    int k,sum=0,rem,t,l;
     int coun=1;
    scanf("%d",&t);
    while(t--)
    {
        r=1;
    scanf("%llu %llu",&a,&b);
    while(b!=0)
    {

        r*=a;
        b--;

    }
    l=sqrt(r);
    k=l;
    printf("Case %d: %d\n",coun,k);
  coun++;

    }

    return 0;

}
