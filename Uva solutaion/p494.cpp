#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
   int i,counter,n;
  char word[10002];

 while(gets(word))
 {
    counter=0;
     n=strlen(word);

   for(i=0;i<n;i++)
   {
       if(isalpha(word[i])&&!isalpha(word[i+1]))
       {
             counter++;
       }
   }
   cout<<counter<<endl;
 }
    return 0;
}
