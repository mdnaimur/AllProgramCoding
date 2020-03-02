#include<stdio.h>
#include<string.h>
int main()
{
    char w[1005];
    int t,i,count;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf(" %[^\n]",w);
        for(i=0;i<=strlen(w);i++)
        {
            switch (w[i])
            {
                case ' ': if(i>0)count++;
                break;
                case '.':
            case '?':
            case '!':
            case ';':
            case ',':

                break;
            }

        }
        printf("Count : %d\n",count+1);
    }
    return 0;
}
