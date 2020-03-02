#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;
const int mod=1e9+7;
int dp[2][2002][2002];
long long sum[2][2][2002][2002];
struct pp
{
	int n,a1,an,id;
	bool operator <(const pp &temp)const
	{
		return n<temp.n;
	}
};
pp data[3333];
int n,a1,an,tst,f[2002][2002],ans[3333];
int main()
{
	int i,j,s,p,q;
	dp[1][0][0]=1;
	for(i=1;i<=2000;i++)
		for(j=0;j<=i;j++)
		{
			dp[0][i][j]=dp[1][i-1][i-1];
			if(j)
			{
			   dp[0][i][j]=(dp[0][i][j]+dp[0][i][j-1])%mod;
			   dp[0][i][j]=(dp[0][i][j]-dp[1][i-1][j-1]+mod)%mod;
			   dp[1][i][j]=(dp[1][i][j-1]+dp[0][i-1][j-1])%mod;
			}
		}
	tst=0;
	while(scanf("%d%d%d",&n,&a1,&an)==3)
	{
		if(a1>an)
			swap(a1,an);
		if(a1>n+1-an)
		{
			swap(a1,an);
		    a1=n+1-a1;
		    an=n+1-an;
		}
		data[tst].id=tst;
		data[tst].n=n;
		data[tst].a1=a1;
		data[tst++].an=an;
		f[n-2][a1-1]=max(f[n-2][a1-1],n-an);
	}
	for(i=1997;i>=0;i--)
		for(j=i;j>=0;j--)
			f[i][j]=max(f[i][j],f[i+1][j]-1);
	sort(data,data+tst);
	int u=0,flag=0;
	sum[0][1][0][0]=1;
	for(i=1;i<=1999;i++)
	{
		while(data[u].n==i+1)
		{
			ans[data[u].id]=0;
			a1=data[u].a1;
			an=data[u].an;
			n=data[u].n;
			for(j=0;j<2;j++)
			{
			    	ans[data[u].id]=(ans[data[u].id]+sum[flag][j][a1-1][n-an])%mod;
		    		if(n-an>=1)
		    		   ans[data[u].id]=(ans[data[u].id]-sum[flag][j][a1-1][n-an-1])%mod;
			}
     		if(ans[data[u].id]<0)
			   ans[data[u].id]+=mod;
			u++;
		}
		for(j=0;j<=i;j++)
		{
		    for(s=0;s+j<=i&&s<=f[i][j];s++)
			{
			   	sum[1-flag][1][j][s]=dp[0][i][i-j]+dp[1][i][i-j];
			    if(i-j>0)
			        sum[1-flag][1][j][s]-=dp[0][i][i-j-1]+dp[1][i][i-j-1];
				if(s)
				{
					sum[1-flag][1][j][s]=(sum[1-flag][1][j][s]+sum[1-flag][1][j][s-1]-sum[flag][0][j][s-1]);
					sum[1-flag][0][j][s]=sum[1-flag][0][j][s-1]+sum[flag][1][j][s-1];
					sum[1-flag][0][j][s]%=mod;
				}
				sum[1-flag][1][j][s]%=mod;
			}
		}
		flag^=1;
	}
	for(i=0;i<tst;i++)
	   printf("%d\n",ans[i]);
	return 0;
}
