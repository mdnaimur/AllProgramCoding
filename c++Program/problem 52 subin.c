#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[200],st[200];
   int i,j,len1,len2,t,cout;

    gets(str);
    gets(st);
    len1=strlen(str);
    len2=strlen(st);
    for(i=0;i<len1-len2;i++)
    {
        cout=0;
        if(st[0]==str[i])
        {
            for(j=0;j<len2;j++)
            {
                if(st[j]==str[i+j])
                {
                  cout++;
                }

            }
            if(j==len2)
            {
                printf("%d\n",cout);
            }

        }
    }

return 0;
}
