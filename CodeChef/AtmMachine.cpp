#include<iostream>
using namespace std;
ans(int b,int c)
{
    int k,a;
    while(true)
            {
                if(a<=k){
                    cout<<1;
                       k=k-a;

                       if(a>k)
                       {
                           cout<<0;
                           k=k-a;
                       }
                }
}
}
int main()
{
    int T,n,k,a,i,j;
    int r[1024];
    cin>>T;
    while(T--)
    {
        j=0;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            ans(a,k);
         /* while(true)
            {
                if(a<=k){
                    cout<<1;
                       k=k-a;

                       if(a>k)
                       {
                           cout<<0;
                           k=k-a;
                       }
                }


            }
  cout<<endl;*/
        }

    }
    return 0;

}

/*#include<bits/stdc++.h>

using namespace std;

const double  Pi = acos(-1.0);

long long readInt(long long l,long long r,char endd){
	long long x=0;
	int cnt=0;
	int fi=-1;
	bool is_neg=false;
	while(true){
		char g=getchar();
		if(g=='-'){
			assert(fi==-1);
			is_neg=true;
			continue;
		}
		if('0'<=g && g<='9'){
			x*=10;
			x+=g-'0';
			if(cnt==0){
				fi=g-'0';
			}
			cnt++;
			assert(fi!=0 || cnt==1);
			assert(fi!=0 || is_neg==false);

			assert(!(cnt>19 || ( cnt==19 && fi>1) ));
		} else if(g==endd){
			assert(cnt>0);
			if(is_neg){
				x= -x;
			}
			assert(l<=x && x<=r);
			return x;
		} else {
			assert(false);
		}
	}
}
string readString(int l,int r,char endd){
	string ret="";
	int cnt=0;
	while(true){
		char g=getchar();
		assert(g!=-1);
		if(g==endd){
			break;
		}
		cnt++;
		ret+=g;
	}
	assert(l<=cnt && cnt<=r);
	return ret;
}
long long readIntSp(long long l,long long r){
	return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
	return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
	return readString(l,r,'\n');
}
string readStringSp(int l,int r){
	return readString(l,r,' ');
}

int main(){
    int T = readIntLn(1 , 100);
    while(T--){
        int n = readIntSp(1 , 100);
        int sum = readIntLn(1 , 1000000);
        for(int j = 1 ; j <= n ; j++){
            int x;
            if(j != n) x = readIntSp(1 , 1000000);
            else x = readIntLn(1 , 1000000);
            if(sum >= x) {cout<<1; sum -= x;}
            else cout<<0;
        }
        cout<<endl;
    }
}
*/
