
//Dispensary Management System.
#include<fstream>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<iostream>
using namespace std;
class drags{
          protected:
          char drag[20];
          char id[7];
          void get(){
             cout<<"\nINPUT THE NAME OF MEDICINE\n";
             cin>>drag;
             cout<<"\nINPUT IDENTIFICATION NUMBER\n";
             cin>>id;
             }
       } ;

class cost:public drags{
              protected:
              float buy;
              float sell;
              float earn;
              void cal(){earn=sell-buy;}
              void getdata();
              };

void cost::getdata()
       {
         get();
         cout<<"\nWHAT IS BUYING COST \n";
         cin>>buy;
         cout<<"\nWHAT IS SELLING COST \n";
         cin>>sell;
         cal();
         cout<<"\nDATA SAVING\n";
         for(int i=0;i<8;i++)
         {
		 sound(2600);
          delay(100);
          nosound();
          delay(500);
          cout<<".";
         }
       }

class savedata:public cost
          {
           protected:
           char file[40];
           void filemak(){
                strcpy(file,"drugs\\");
                strcat(file,id);
                strcat(file,".txt");
                }
           void save();
         };

void savedata::save()
          {
           filemak();
           ofstream x(file);
           x<<buy<<endl<<sell;
           x<<"NAME:-"<<drag<<endl;
           x<<"ID:- "<<id<<endl;
           x<<"BUYING VALUE:- "<<buy<<" TAKA"<<endl;
           x<<"SELLING VALUE:- "<<sell<<" TAKA"<<endl;
           x<<"NEAT PROFIT:- "  <<earn<<" TAKA"<<endl;
           x.close();
         }
class loaddata:public savedata
          {
        private:
        char ch;
        float garbage;
        protected:
        void load();
           };

void loaddata::load()
         {
          clrscr();
          cout<<"\nINPUT THE ID NUMBER FOR MEDICINE\n";
          cin>>id;
          filemak();
          ifstream x(file);
          clrscr();
          cout<<"\nFILE SEARCHING\n";
          for(int i=0;i<8;i++)
         {
          delay(500);
          cout<<".";
         }
          clrscr();
          cout<<"INFORMATION ON MEDICINE ID NO: "<<id<<endl;
          x>>garbage;
          x>>garbage;
          while(x)
           { x.get(ch);
             delay(100);
             cout<<ch;
           }
          getch();
          x.close();
        }

class changedata:public loaddata{
                 private :
                 float i,j;
                 protected:
                 void  change();
                };
void changedata::change()
         {
          clrscr();
          cout<<"INPUT ID AND NAME OF DRUGS WHICH VALUE U WANT TO CHANGE";
          cin>>id;
          cin>>drag;
          filemak();
          ifstream x(file);
          clrscr();
          x>>i;
          x>>j;
          x.close();
          cout<<"\nselling value is: "<<j<<" taka"<<endl;
          cout<<"buying value is: "<<i<<" taka"<<endl;
          cout<<"INPUT THE CHANGE VALUE FOR SELLING : ";
          cin>>j;
          cout<<"INPUT THE CHANGE VALUE FOR BUYING : ";
          cin>>i;
          sell=j;
          buy=i;
          cal();
          save();
         }

class start:protected changedata
               {
                 private:
                 int choice;
                 void display();
                 void bye(){
                     cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t*****************";
                     cout<<"\n\t\t\t\t*** GOOD BYE ****";
                     cout<<"\n\t\t\t\t*****************";
                     delay(3000);
                    }
                 public:
                 start();
               };
void start::display()
           {
            textcolor(5);
            clrscr();
            cout<<"\n*************************************************";
            cout<<"\n*\t\t WELCOME\t\t\t*\n*\t\t1...INPUT\t\t\t* \n*\t\t2...SEARCH\t\t\t*";
            cout<<"\n*\t\t3...CHANGE\t\t\t*\n*\t\t4...EXIT\t\t\t*\n";
            cout<<"*************************************************";
            cout<<"\n\nINPUT UR CHOICE: ";
           }
start::start()
       {
        while(1)
         {
          display();
          cin>>choice;
          clrscr();
          if(choice==4)
            {
             bye();
             break;
            }
          if(choice==1)
           {
            getdata();
            save() ;
           }
          if(choice==2)
             load();
          if(choice==3)
             change();
           }
       }

int main()
      {
        start s;
        return 0;
       }

