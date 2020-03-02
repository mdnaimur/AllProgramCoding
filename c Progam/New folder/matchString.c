#include <stdio.h>

int main()
{
    char input[40];
    char check[40];
    int i=0;
    printf("Hello!\nPlease enter a word or character:\n");
    gets(input);
    printf("I will now repeat this until you type it back to me.\n");

    while (check != input)
    {
        printf("%s\n", input);
        gets(check);
    }

    printf("Good bye!");


    return 0;
}
