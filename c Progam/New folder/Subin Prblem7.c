#include<stdio.h>
int main()
{
    char line[1000];
    int n;
    //scanf("%d",&n);
    int i,c;
    //while(n--)

    {
        scanf("%[^\n]s",line);
        c=0;
    for(i=1;line[i]!='\0';i++)
    {
        if(line[i]==' ')
            c=c+1;

    }
    printf("%d\n",c+1);

    }


    return 0;
}
