#include<stdio.h>
int main()
{
    char ch;
    int val,t;
    int i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",&ch);
        val=ch;
        if(val>='a' && val<='z')
           {
            printf("lowercase character\n");
           }
            else if(val>='A' && val<='Z')
            {
                printf("uppercase character\n");
            }
            else if(val>='0' && val<='9')
                {

                printf("Numerical Digit\n");
            }
            else{

                printf("Spacial character\n");
            }
    }

    return 0;
}
