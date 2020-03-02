#include<stdio.h>
#include<string.h>
int main()
{
    char name[1000],temp[1000];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",name);
        for(j=i;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
        printf("output is : %s \n",name);
    }
    return 0;
}
