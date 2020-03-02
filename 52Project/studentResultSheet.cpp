#include<fstream>
 #include<iostream>
 #include<conio.h>
 #include <string.h>
using namespace std;
 class pro
 {
 public:
 int done();
 };
 int pro::done()
    {

    char str[2000];
    //char roll[100][10];
    char r[10];
    int sum=0;
    int find=0;
    cout<<"Enter roll to search:";
    cin>>r;
    fstream file_op("1.txt",ios::in);

    int i=0,j=1;
    while(file_op >> str)
    {
    if(file_op.eof())
    {
     find=0;
     break;
    }
    if(i%7==0)
      {
      if(strcmp(r,str)==0)
      {
      cout<<"\n\nRoll  \tName \tpos\tphy\tChem\tEng\tMath\tTotal\n";
    cout<<"------------------------------------------------\
------------------\n";
      find=1;
      cout << str<<"\t" ;
      //cout<<"yes found";
      while(file_op >> str)
        {
        cout << str<<"\t" ;
        if(j>=3 && j<=6)
          {
          int d=1;
          for(int i=strlen(str)-1;i>=0;i--)
           {
           sum+=(str[i]-48)*d;
           d*=10;
           }
          }
        if(j==6)
        break;
        j++;
        }
       }

     }

      if(find==1)
      break;
     i++;
       }
       if(find==1)
     cout<<sum;
       else
     cout<<"not found!";
    file_op.close();


    return 0;
    }
    int main()
    {
    pro P;
    
    P.done();
    getch();
    }
