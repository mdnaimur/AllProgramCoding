/**#include <stdio.h>
#if 0
#include<conio.h>
#endif

int main(){
    int word;
    int countword = 0;
    int countpunct = 0;
    printf("\nEnter the String: ");
    while ((word = getchar()) != EOF && word != '\n'){
        if (word == ' ') countword++;
        if (word == '.' || word == '?' ||  word == '!' ||  word == '(' ||  word == ')' ||  word == '*' ||  word == '&'){
            countpunct++;
        }
    }
    printf("\nThe number of words is %d.", countword);
    printf("\nThe number of punctuation marsks is %d.", countpunct);
#if 0
    getch();
#endif
}*/
#include <stdio.h>
#include <string.h> //for strlen()

int main(){
    char input[2550];
    int wcount, pcount, i;
    wcount = pcount = 0;

    printf("\nEnter the String: ");
    fgets(input, 255, stdin);  //use this instead

    for (i=0; i < strlen(input); i++){
        switch (input[i]){
            case ' ':
                if (i > 0) wcount++;
                break;
            case '.':
            case '?':
            case '!':
            case ';':
            case ',':
            case '*':
            case '&':
                pcount++;
                break;
        }
    }
    printf("\nThe number of words is %d.", wcount+1);
   // printf("\nThe number of punctuation marsks is %d.", pcount);
    return 0;
}
