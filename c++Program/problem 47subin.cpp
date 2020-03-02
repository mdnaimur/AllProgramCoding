#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,i,j,k,n,m,p;
	int num[50],anum[50],cnum[50];
	scanf("%d",&t);
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num[i];
		}
		cin>>m;
		for(j=0;j<m;j++)
		{
			cin>>anum[j];
		}
		i=0;
		j=0;
		k=0;
		while(i<n&&j<m)
		{
			if(num[i]<=anum[j])
			{
				cnum[k]=num[i];
				i++;
				k++;

			}
			else{
				cnum[k]=anum[j];
				j++;
			k++;
			}

		}
		while(i<n)
		{
			cnum[k]=num[i];
			i++;
			k++;
		}
		while(j<m)
		{
			cnum[k]=anum[j];
			j++;
			k++;
		}


		for(i=0;i<n+m;i++)
		{
			cout<<cnum[i];
			cout<<" ";
		}
		cout<<endl;

	}

	return 0;
}
