#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 20000

int main()
{

char ch,s[MAX_LEN],sen[MAX_LEN];

        scanf("%c", &ch);
        scanf("%s",&s);
        scanf(" %[^\n]%*c",sen);

           printf("%c\n", ch);
    printf("%s\n",s);

    printf("%s\n",sen);
    return 0;
}
