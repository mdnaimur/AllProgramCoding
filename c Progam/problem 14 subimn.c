#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char first_line[1000],second_line[2];
    int i,count=0;
    scanf(" %[^\n]",first_line);
    scanf("%s",second_line);
    for(i=0;i<strlen(first_line);i++){
        if(second_line[0]==first_line[i]){
            count++;
        }
        else{
            printf("'%c' is not present\n",second_line[0]);
            break;
        }
    }
    printf("The occurrence of '%c' in '%s' = %d\n",second_line[0],first_line,count);
    return 0;
}
