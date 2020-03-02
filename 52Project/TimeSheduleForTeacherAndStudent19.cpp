#include<iostream>
#include<conio.h>
using namespace std;

class day
{
public:
    sun()
{
cout<<"sun     cse     eee                                          L cse(A-group)";
 cout<<endl<<endl;
 cout<<"        RAJIB   SHABUR                                       AJHER & NAWAJ   ";
    return 0;
     }
    mon()
{cout<<"mon     mat             cse     che      eee                 L me1270 ";
 cout<<endl<<endl;
 cout<<"        JAHID           AJHER   MORSHAD  DABROTO             LIAJE & SULTAN ";

    return 0;
     }
    tue()
{cout<<"tue     mat     che     cse     cse                          L cse(B-group)";
 cout<<endl<<endl;
 cout<<"        ARIF    AGIJ    NAZRUL  NAWAJ                        AJHER & NAWAJ   ";

    return 0;
     }
    wed()
{cout<<"wed     -eeelab(A-group)-----   cse      eee                 Lab  Hum        ";
 cout<<endl<<endl;
 cout<<"         SHABUR                 RAJIB   DABROTO              MD.MOHAMOD     ";

    return 0;
     }
    thu()
{cout<<"thu     che     cse     mat     ------che(lab)--------       Leeelab(B-group)";
 cout<<endl<<endl;
 cout<<"       MORSHAD  RAJIB   JAHID        MORSHAD                 AJHER & NAWAJ   ";
    return 0;
     }
      };
      //******************End of day class*********************//
           //--------**********************---------//
class teacher
{
  public:
    t_AJHER()
{cout<<"sun                                                         Lcse(A-group)    ";
 cout<<endl<<endl;
 cout<<"mon                     cse                                                   ";
 cout<<endl<<endl;
 cout<<"tue                                                         Lcse(B-group)     ";
 cout<<endl<<endl;
 return 0;
     }
    t_NAWAJ()
{
 cout<<"sun                                                         Lcse(A_group)    ";
 cout<<endl<<endl;
 cout<<"tue                             cse                         Lcse(B-group)    ";
 cout<<endl<<endl;
 cout<<"thu             cse                                                          " ;
 cout<<endl<<endl;
    return 0;
     }

 t_RAJIB()
{cout<<"                cse                                                ";
 cout<<endl<<endl;
 cout<<"tue                     cse                                                 ";
 cout<<endl<<endl;
 cout<<"wed                             cse                                         ";
 cout<<endl<<endl;
    return 0;
     }
t_SHABUR()
{cout<<"sun             eee                                                        ";
 cout<<endl<<endl;
 cout<<"wed     -eeelab(A-group)---                                                 ";
 cout<<endl<<endl;
 cout<<"                                                            Leeelab(B-group)";
 cout<<endl<<endl;
    return 0;
     }

t_DABROTO()

{cout<<"mon                                      eee                                ";
cout<<endl<<endl;
cout<<"wed                                       eee                                  ";
cout<<endl<<endl;
    return 0;
     }
t_JAHID()

{cout<<"mon     mat                                                                 ";
 cout<<endl<<endl;
 cout<<"thu                     mat                                                  ";
  cout<<endl<<endl;
    return 0;
     }
 t_ARIF()

{cout<<"tue     mat                                                                    ";
 cout<<endl<<endl;
  return 0;
     }
 t_MORSHAD()
{cout<<"tue            che                                                           ";
 cout<<endl<<endl;
 cout<<"thu     che                    ------che(lab)----------                     ";


 cout<<endl<<endl;
  return 0;
    }
t_AGIJ()
{cout<<"mon                             che                                          ";
 cout<<endl<<endl;
  return 0;
   }
t_LIAJE()
{
 cout<<"mon                                                          L me1270-F,T ";
 cout<<endl<<endl;
  return 0;
       }
t_SULTAN()

{cout<<"mon                                                          L me1270-F,T ";
 cout<<endl<<endl;
  return 0;
  }
t_MOHAMOD()
 {

 cout<<"                                                             Lab Hum   ";
   return 0;
   }
   };
   //********************************************************//
          //END TEACHER CLASS//
       //"*********************************************"//
int main()
     {
     day b;
     teacher s;
     int x;
     int y;
 
 cout<<endl<<endl<<endl<<endl;
 cout<<"      -----------------ALL DAY TIME SCHEDULE------------------";
 cout<<endl<<endl<<endl<<endl;
 cout<<"time-- 8.00    8.50    9.40    10.40    11.30    12.20       2.30";
 cout<<endl<<endl;
 cout<<"day"<<endl;
 cout<<"  |"<<endl   ;
 cout<<"  |";
 cout<<endl;
      b.sun();
 cout<<endl<<endl<<endl;
     b.mon();
 cout<<endl<<endl<<endl;
     b.tue();
 cout<<endl<<endl<<endl;
    b.wed();
 cout<<endl<<endl<<endl;
     b.thu();
 cout<<endl<<endl<<endl;
 cout<<"                          ******END******            " <<endl<<endl<<endl;
 getch();
 cout<<"you can do the following::enter your appropriate option" <<endl<<endl<<endl;
 cout<<"routine only a day "<<endl<<endl;
 cout<<endl<<"1:sun"<<endl;
 cout<<endl<<"2:mon"<<endl;
 cout<<endl<<"3:tue"<<endl;
 cout<<endl<<"4:wed"<<endl;
 cout<<endl<<"5:thu"<<endl;
 cout<<endl<<"6:Quit"<<endl;
 cout<<endl<<endl;
 cout<<"If you not need the one day schedule enter:6"<<endl<<endl;
 cout<<"Enter your choice::";
 cout<<endl<<endl;
 cout<<"time--- 8.00    8.50    9.40    10.40    11.30    12.20       2.30";
 cout<<endl<<endl<<endl;

 do
  {
    cin>>x;
    if(x>5)
    break;
    cout<<endl<<endl;

    switch(x)
    {

   case 1:
     b.sun();
     break;
   case 2:
     b.mon();
     break;
   case 3:
     b.tue();
     break;
   case 4:
     b.wed();
     break;
   case 5:
     b.thu();
     break;
   default:
     break;

   }
   cout<<endl<<endl;
   }while(x<=5);

 
 cout<<"Are you want the teacher schedule:";
 cout<<endl<<endl<<endl;
 cout<<endl<<"1:T-AJHER"<<endl;
 cout<<endl<<"2:T-NAWAJ"<<endl;
 cout<<endl<<"3:T-RAJIB"<<endl;
 cout<<endl<<"4:T-SHABUR"<<endl;
 cout<<endl<<"5:T-DABROTO"<<endl;
 cout<<endl<<"6:T-JAHID"<<endl;
 cout<<endl<<"7:T-ARIF"<<endl;
 cout<<endl<<"8:T-MORSHAD"<<endl;
 cout<<endl<<"9:T-AGIJ"<<endl;
 cout<<endl<<"10:T-SULTAN"<<endl;
 cout<<endl<<"11:T-LIAJE"<<endl;
 cout<<endl<<"12:T-MD.MOHAMOD"<<endl;
 cout<<endl<<"13:Quit";
 cout<<endl<<endl<<endl;
 cout<<"IF YOU DO NOT WANT THIS SCHEDULE ENTER:12"<<endl<<endl;
 cout<<"Enter your choice::";
 cout<<endl<<endl; //less then 12
 do
  {
    cin>>y;
    if(y>12)
    break;
    cout<<endl<<endl;
    cout<<"time--- 8.00    8.50    9.40    10.40    11.30    12.20       2.30";
    cout<<endl<<endl<<endl;

    switch(y)
    {

   case 1:
     s.t_AJHER();
     break;
   case 2:
     s.t_NAWAJ();
     break;
   case 3:
     s.t_RAJIB();
     break;
   case 4:
     s.t_SHABUR();
     break;
   case 5:
     s.t_DABROTO();
     break;
   case 6:
     s.t_JAHID();
     break;
   case 7:
     s.t_ARIF();
     break;
   case 8:
     s.t_MORSHAD();
     break;
   case 9:
     s.t_AGIJ();
     break;
   case 10:
    s.t_SULTAN();
    break;
   case 11:
    s.t_LIAJE();
   case 12:
    s.t_MOHAMOD();
   default:
     break;
   }
   cout<<endl<<endl;
   }while(x<=12);
    cout<<"--------------------********END*********------------------";
     getch();
     return 0;
  }


