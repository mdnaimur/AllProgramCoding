#include<iostream>
#include<stdio.h>

using namespace std;

void factorial(int n)
{
    long long int f;
    for(f=1;n>1;n--){
        f*=n;
    }
    cout<<f<<endl;
}
int main()
{
    int a,b,c;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if((a>b&&b<c)||a<b && b<c)
            factorial(b);
        else if((b>a&&a<c)||b<a && a<c)
            factorial(a);
         else if((a>c&&c<b)||a<c && c<b)
            factorial(c);

    }
    return 0;
}
