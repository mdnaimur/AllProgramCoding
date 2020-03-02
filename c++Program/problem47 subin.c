#include<stdio.h>
int main()
{
	int t,i,j,k,n,m,p,w;
	int num[20],anum[20],cnum[20];
	scanf("%d",&t);
	while(t--)
	{
        scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&anum[i]);

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
			printf("%d",cnum[i]);
			printf(" ");
		}

        printf("\n");
	}


	return 0;
}
