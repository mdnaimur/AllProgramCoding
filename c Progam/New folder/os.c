//Write a program for the simulation of ls command.
#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
int main()
{
char dirname[10];
DIR*p;
struct dirent *d;
printf("Enter directory name\n");
scanf("%s",dirname);
p=opendir(dirname);
if(p==NULL)
{
perror("Cannot find directory");
exit(-1);
}
while(d=readdir(p))
printf("%s\n",d->d_name);
return 0;
}
