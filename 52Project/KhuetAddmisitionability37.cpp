

//Ability for KUET Admission Test.
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

  class student
   {
     public:
        int y;
        char name[90],board[90],ins[90];

        void getst()
           {
        cout<<"\nEnter candidate's name: ";
        gets(name);
        cout<<"Year of passed HSC exam: ";
        cin>>y;
        cout<<"Candidate's Last institution: ";
        gets(ins);
        cout<<"Passed board: ";
        gets(board);
           }

   };


  class exam:public student
   {
     public:
        float p,c,e,m;

        void geta()
        {
         cout<<"Enter the GPA in physics: ";
         cin>>p;

         cout<<"Enter the GPA in chemistry: ";
         cin>>c;

         cout<<"Enter the GPA in math: ";
         cin>>m;

         cout<<"Enter the GPA in english: ";
         cin>>e;
        }
        void verify()
        {
          float total=p+c+m+e;

          if(total>=17)
            {

               if((p>=3.50&&p<=5)&&(c>=3.50&&c<=5)&&(m>=3.50&&m<=5)&&(e>=3.50&&e<=5))
                cout<<"Student's name: "<<name
                <<"\nTotal GP: "<<total
                <<"\nCONGRATULATION\n"
                <<"The candidate is qualified for KUET admission.\n\n";
               else
                cout<<"Student's name: "<<name
                <<"\nTotal GP: "<<total
                <<"\nSORRY\n"
                <<"The candidate is not qualified for KUET admission.\n\n";
            }
          else
               {
               cout<<"Student's name: "<<name
                   <<"\nTotal GP: "<<total
                   <<"\nSORRY\n"
                   <<"The candidate is not qualified for KUET admission.\n\n";
               }
        }
   };




  int main()
    {
       
      exam e[100];
      int index,j;

     do{
         cout<<"\n\t\t\t    KUET ADMISSION TEST"
         <<"\n1.Get candidate's info in details."
         <<"\n2.View the status of candidates."
         <<"\n3.Exit.\nChoose your decision: ";
         cin>>index;

         switch(index)

         {
           case 1:

               cout<<"How many candidates: ";
               cin>>j;
               for(int i=0;i<j;i++)
               {
              e[i].getst();
              e[i].geta();
               }
                     break;

           case 2:

               for( int i=0;i<j;i++)

              e[i].verify();
                     break;

           case 3:
               break;
           default:
              cout<<"\aWrong choice...... Try again.\n";
            break;

         }

     }while(index!=3);
    }


