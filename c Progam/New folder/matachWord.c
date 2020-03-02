#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
char word[100];
char sentence[100];

//clrscr();
printf("Enter a word: ");
fgets(word, 100, stdin);
//getch();
printf("The word is : %s", &word);
//getch();
printf("\nEnter a sentence: ");
fgets(sentence, 100, stdin);
//getch();
printf("The sentence is: %s",&sentence);
//getch();
if(strstr(sentence,word) == 0){
  printf("word found!");
}
getch();
return 0;
}
