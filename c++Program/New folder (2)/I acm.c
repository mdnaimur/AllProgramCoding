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
    while(p>0)
    {
        rem=p%10;
        sum=sum+rem;
        p/=10;

    }
    return sum;
}
int main()
{
    unsigned long long a,b,r,k;
    int t;
     int coun=1;
    scanf("%d",&t);
    while(t--)
{

    scanf("%llu %llu",&a,&b);
     r=pow(a,b);
    k=f(r);

    printf("Case %d: %d\n",coun,k);
  coun++;

    }
return 0;

}
