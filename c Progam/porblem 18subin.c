#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char strn[100];
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %[^\n]",strn);

        int len=strlen(strn);
       for(i=0;i<len;i++)
        {
               if(strn[i]=='a'||strn[i]=='e'||strn[i]=='i'||strn[i]=='o'||strn[i]=='u')
                {
                        printf("%c",strn[i]);
                    }

        }
        printf("\n");

    for(i=0;i<=strn[i]!='\0';i++){
        if(strn[i]!='a'&&strn[i]!='e'&&strn[i]!='i'&&strn[i]!='o'&&strn[i]!='u'&&strn[i]!=' ')

        {
            printf("%c",strn[i]);
        }

         }
          printf("\n");


    }
    return 0;
}
