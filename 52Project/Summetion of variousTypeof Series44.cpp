
//Summation Of Various Types Of Series
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
class base_class
      {

      };

/******************************** SINX **************************************/

             /*-----------------------------------*/
             //sinx=x-x^3/3!+x^5/5!- ---------
             /*-----------------------------------*/

class sinx:public base_class
     {
    private:
         int p,j;
         double n,m,sum;
    public:
         void convert_1(void);
         int fact_1(int x);
         void summation_1(void);
     };

void sinx::convert_1()
      {
         cout<<" Please enter the value of degree.: ";
         cin>>m;
         cout<<" Thanks a lot for you.";
         n=m*0.017453;
      }

int sinx::fact_1(int a)
     {
        if(a==1)
        return 1;
        else
        return a*(a-1);
     }

void sinx::summation_1()
      {
          int j=1,p=1;
          double q,sum=0;
          for(;;)
          {
            q=pow(n,p);
            if(q/fact_1(p)<0.0001)
                 break;
            else
            sum=sum+j*(q/fact_1(p));
            p=p+2;
            j=j*(-1);
          }
         cout<<"\n The total sum of the series of sinx is : "<<sum;
      }

/******************************* COSX ***************************************/

         /*--------------------------------------*/
              //cosx=1-x^2/2!+x^4/4!- -----------
         /*--------------------------------------*/

class cosx:public base_class
     {
       private:
           int p,j;
           double n,m,sum;
       public:
           void convert_2(void);
           int fact_2(int x);
           void summation_2(void);
     };

void cosx::convert_2()
      {
         cout<<" Please enter the value of degree.: ";
         cin>>m;
         cout<<" Thanks a lot for you.";
         n=m*0.017453;
      }

int cosx::fact_2(int a)
     {
         if(a==1)
         return 1;
         else
         return a*(a-1);
     }

void cosx::summation_2()
      {
          int j=-1,p=2;
          double q,sum=1;
          for(;;)
          {
             q=pow(n,p);
             if(q/fact_2(p)<0.0001)
              break;
             sum=sum+j*(q/fact_2(p));
             p=p+2;
             j=j*(-1);
          }
         cout<<"\n The total sum of the series of cosx is : "<<sum;
      }

/******************************** E^X ***************************************/

            /*----------------------------------*/
            //e^x=1+x+x^2/2!+x^3/3!+ -------
            /*----------------------------------*/

class power_1:public base_class
     {
    private:
        int p,j,n;
        double sum;
    public:
        void input_1(void);
        int fact_3(int x);
        void summation_3(void);
     };

void power_1::input_1()
          {
        cout<<" Please enter the value of x.: ";
        cin>>n;
        cout<<" Thanks a lot for you.";
          }

int power_1::fact_3(int a)
      {
        if(a==1)
          return 1;
        else
        return a*(a-1);
      }

void power_1::summation_3()
       {
         int j=1,p=1;
         double q,sum=1;
         for(;;)
           {
             q=pow(n,p);
             if(q/fact_3(p)>20)
             break;
             else
            sum=sum+j*(q/fact_3(p));
            p=p+1;
            j=j*1;
           }
         cout<<"\n The total sum of the series of e^x is : "<<sum;
       }

/****************************** E^-X ****************************************/

            /*-------------------------------------*/
            //e^-x=1-x+x^2/2!-x^3/3!+ ---------
            /*-------------------------------------*/

class power_2:public base_class
       {
     private:
         int p,j,n;
         double sum;
     public:
         void input_2(void);
         int fact_4(int x);
         void summation_4(void);
       };

void power_2::input_2()
         {
        cout<<" Please enter the value of x.: ";
        cin>>n;
        cout<<" Thanks a lot for you.";
         }

int power_2::fact_4(int a)
         {
           if(a==1)
          return 1;
           else
           return a*(a-1);
         }

void power_2::summation_4()
          {
         int p=1,j=(-1);
         double q,sum=1;
         for(;;)
               {
             q=pow(n,p);
             if(q/fact_4(p)>20)
                 break;
             else
                 sum=sum+j*(q/fact_4(p));
                 p=p+1;
                 j=j*(-1);
               }
         cout<<"\n The total sum of the series of e^-x is : "<<sum;
          }

/******************************* LN(1+X) ************************************/

           /*------------------------------------------*/
               //ln(1+x)=x-x^2/2+x^3/3- ---------------
           /*------------------------------------------*/

class logarithm_1:public base_class
      {
         private:
             int p,j,n;
             double sum;
         public:
             void input_3(void);
             void summation_5(void);
      };

void logarithm_1::input_3()
         {
           cout<<" Please enter the value of x.: ";
           cin>>n;
         }

void logarithm_1::summation_5()
         {
            int p=1,j=1;
            double q,sum=0;
            for(;;)
              {
                q=pow(n,p);
                if(q/p>30)
                break;
                else
                sum=sum+j*(q/p);
                p=p+1;
                j=j*(-1);
              }
            cout<<"\n The total sum of the series of ln(1+x)is : "<<sum;
         }

/******************************* LN(1-X) ************************************/

           /*-----------------------------------------*/
               //ln(1-x)=-x-x^2/2-x^3/3- -------------
           /*-----------------------------------------*/

class logarithm_2:public base_class
     {
       private:
           int p,j,n;
           double sum;
       public:
           void input_4(void);
           void summation_6(void);
     };

void logarithm_2::input_4()
        {
          cout<<" Please enter the value of x.: ";
          cin>>n;
          cout<<" Thanks a lot for you.";
        }

void logarithm_2::summation_6()
         {
            int p=1,j=(-1);
            double q,sum=0;
            for(;;)
              {
                q=pow(n,p);
                if(q/p>20)
                break;
                else
                sum=sum+j*(q/p);
                p=p+1;
                j=j*1;
              }
            cout<<"\n The total sum of the series of ln(1-x)is : "<<sum;
         }

/****************************** TAN INVERSE X *******************************/

          /*---------------------------------------------*/
          //tan^-1x=x-x^3/3+x^5/5- ------------------
          /*---------------------------------------------*/

class inverse_1:public base_class
     {
         private:
             int p,j;
             double n,m,sum;
         public:
             void convert_7(void);
             void summation_7(void);
     };

void inverse_1::convert_7()
           {
         cout<<" Please enter the value of degree.: ";
         cin>>m;
         cout<<" Thanks a lot for you.";
         n=m*0.017453;
           }

void inverse_1::summation_7()
          {
        int p=1,j=1;
        double q,sum=0;
        for(;;)
              {
               q=pow(n,p);
               if(q/p<0.0001)
               break;
               else
               sum=sum+j*(q/p);
               p=p+2;
               j=j*(-1);
              }
        cout<<"\n The total sum of the series of tan^-1x is : "<<sum;
          }

/****************************** (1-X)^-1 ************************************/

          /*----------------------------------------------*/
          //(1-x)^-1=1+x+x^2+x^3+x^4+ ----------------
          /*----------------------------------------------*/

class inverse_2:public base_class
     {
       private:
           int p,j,n;
           double sum;
       public:
           void input_5(void);
           void summation_8(void);
     };

void inverse_2::input_5()
           {
          cout<<" Please enter the value of x.: ";
          cin>>n;
          cout<<" Thanks a lot for you.";
           }

void inverse_2::summation_8()
           {
         int j=1,p=1;
         double q,sum=1;
         for(;;)
              {
                q=pow(n,p);
            if(q>100)
               break;
            else
               sum=sum+j*q;
               p=p+1;
               j=j*1;
              }
         cout<<"\n The total sum of the series of (1-x)^-1is : "<<sum;
           }

/***************************** (1+X)^-1 *************************************/

         /*-------------------------------------------*/
             //(1+x)^-1=1-x+x^2-x^3+ -----------------
         /*-------------------------------------------*/

class inverse_3:public base_class
      {
        private:
            int p,j,n;
            double sum;
        public:
            void input_6(void);
            void summation_9(void);
      };

void inverse_3::input_6()
           {
         cout<<" Please enter the value of x.: ";
         cin>>n;
         cout<<" Thanks a lot for you.";
           }

void inverse_3::summation_9()
           {
         int p=1,j=(-1);
         double q,sum=1;
         for(;;)
               {
             q=pow(n,p);
             if(q>100)
                 break;
             else
                 sum=sum+j*q;
                 p=p+1;
                 j=j*(-1);
               }
         cout<<"\n The total sum of the series of(1+x)^-1 is : "<<sum;
           }

/***************************** (1-X)^-2 *************************************/

           /*--------------------------------------------*/
           //(1-x)^-2=1+2x+3x^2+4x^3+ ---------------
           /*--------------------------------------------*/

class inverse_4:public base_class
        {
          private:
              int p,j,x,n;
              double sum;
          public:
              void input_7(void);
              void summation_10(void);
        };

void inverse_4::input_7()
           {
          cout<<" Please eneter the value of x.: ";
          cin>>n;
          cout<<" Thanks a lot for you.";
           }

void inverse_4::summation_10()
           {
         int p=1,j,x=2;
         double q,sum=1;
         j=x;
         for(;;)
               {
             q=pow(n,p);
             if(q>100)
                   break;
             else
                   sum=sum+j*q;
                   p=p+1;
                   j=x+1;
               }
         cout<<"\n The total sum of the series of (1-x)^-2 is : "<<sum;
           }

/***************************** (1+X)^-2 *************************************/

       /*-------------------------------------------------*/
           //(1+x)^-2=1-2x+3x^2-4x^3+ --------------------
       /*-------------------------------------------------*/

class inverse_5:public base_class
      {
         private:
             int p,j,x,n;
             double sum;
         public:
             void input_8(void);
             void summation_11(void);
      };

void inverse_5::input_8()
           {
          cout<<" Please enter the value of x.: ";
          cin>>n;
          cout<<" Thanks a lot for you.";
           }
void inverse_5::summation_11()
           {
          int p=1,j,k=-1,x=2;
          double q,sum=1;
          j=x;
          for(;;)
            {
              k=j*k;
              q=pow(n,p);
              if(q>100)
                   break;
              else
                  sum=sum+k*q;
                  p=p+1;
                  j=x+1;
                  k=k*(-1);
            }
          cout<<"\n The total sum of the series of(1+x)^-2 is : "<<sum;
           }

/**************************** (1-X)^-3 **************************************/

        /*-----------------------------------------------*/
        //(1-x)^-3=1+3x+6x^2+10x^3+ -----------------
        /*-----------------------------------------------*/

class inverse_6:public base_class
     {
        private:
            int p,j,x,n;
            double sum;
        public:
            void input_9(void);
            void summation_12(void);
     };

void inverse_6::input_9()
           {
          cout<<" Please enter the value of x.: ";
          cin>>n;
          cout<<" Thanks a lot for you.";
           }

void inverse_6::summation_12()
           {
          int p=1,j,x=1;
          double q,sum=1;
          for(;;)
            {
              j=((x+1)*(x+2))/2;
              q=pow(n,p);
              if((j*q)>500)
                break;
              else
                sum=sum+j*q;
                p=p+1;
                x=x+1;
            }
          cout<<"\n The total sum of the series of(1-x)^-3 is : "<<sum;
           }

/***************************** (1+X)^-3 *************************************/

          /*---------------------------------------------*/
          //(1+x)^-3=1-3x+6x^2-10x^3+ ---------------
          /*---------------------------------------------*/

class inverse_7:public base_class
      {
    private:
        int p,j,x,n;
        double sum;
    public:
        void input_10(void);
        void summation_13(void);
      };

void inverse_7::input_10()
           {
         cout<<" Please enter the value of x.: ";
         cin>>n;
         cout<<" Thanks a lot for you.";
           }

void inverse_7::summation_13()
           {
         int p=1,j,l,k=(-1),x=1;
         double q,sum=1;
         for(;;)
               {
             j=((x+1)*(x+2))/2;
             l=j*k;
             q=pow(n,p);
             if((j*q)>500)
                 break;
             else
                 sum=sum+(l*q);
                 p=p+1;
                 x=x+1;
                 k=k*(-1);
            }
         cout<<"\n The total sum of the series of(1+x)^-3 is : "<<sum;
           }

/***************************** (E^X+E^-X) ***********************************/

           /*-----------------------------------------*/
           //e^x+e^-x=2(1+x^2/2!+x^4/4! ---------)
           /*-----------------------------------------*/

class inverse_8:public base_class
      {
    private:
        int p,j,n;
        double sum;
    public:
        void input_11(void);
        int fact_14(int x);
        void summation_14(void);
      };

void inverse_8::input_11()
           {
         cout<<" Please enter the value of x.:";
         cin>>n;
         cout<<" Thanks a lot for you.";
           }

int inverse_8::fact_14(int a)
          {
        if(a==1)
           return 1;
        else
           return a*(a-1);
          }

void inverse_8::summation_14()
           {
          int p=2;
          double q,sum=1;
          for(;;)
            {
              q=pow(n,p);
              if(q/fact_14(p)>50)
                   break;
              else
                   sum=sum+(q/fact_14(p));
                   p+=2;
            }
          sum=sum*2;
          cout<<"\n The total sum of the series of(e^x+e^-x)is : "<<sum;
           }

/************************** (E^X-E^-X) **************************************/

        /*------------------------------------------*/
            //(e^x-e^-x)=2(1+x^3/3!+x^5/5!+ --------
        /*------------------------------------------*/

class inverse_9:public base_class
    {
      private:
          int p,j,n;
          double sum;
      public:
          void input_12(void);
          int fact_15(int x);
          void summation_15(void);
    };

void inverse_9::input_12()
           {
          cout<<" Please enter the value of x.: ";
          cin>>n;
          cout<<" Thanks a lot for you.";
           }

int inverse_9::fact_15(int a)
          {
         if(a==1)
             return 1;
         else
             return a*(a-1);
          }

void inverse_9::summation_15()
           {
          int p=3;
          double q,sum=1;
          for(;;)
            {
               q=pow(n,p);
               if(q/fact_15(p)>50)
                break;
               else
                sum=sum+(q/fact_15(p));
                p+=2;
            }
          sum=sum*2;
          cout<<"\n The total sum of the series of(e^x-e^-x)is : "<<sum;
           }

/************************** LOG((1+X)/(1-X)) ********************************/

        /*----------------------------------------------*/
        //log((1+x)/(1-x))=2(x+x^3/3+x^5/5+ -------)
        /*----------------------------------------------*/

class logarithm_3:public base_class
     {
       private:
           int p,j,n;
           double sum;
       public:
           void input_13();
           void summation_16();
     };

void logarithm_3::input_13()
         {
           cout<<" Please enter the value of x.: ";
           cin>>n;
           cout<<" Thanks a lot for you.";
         }

void logarithm_3::summation_16()
         {
            int p=1;
            double q,sum=0;
            for(;;)
              {
                q=pow(n,p);
                if(q/p>200)
                break;
                else
                sum=sum+(q/p);
                p+=2;
              }
            sum=sum*2;
            cout<<"\n The total sum of the series of ln((1+x)/(1-x))is : "<<sum;
         }

/************************** LOG((1+X)*(1-X)) ********************************/

         /*----------------------------------------------------*/
         //log((1+x)*(1-x))=-2(x^2/2+x^4/4+x^6/6+ --------)
         /*----------------------------------------------------*/

class logarithm_4:public base_class
      {
        private:
            int p,j,n;
            double sum;
        public:
            void input_14();
            void summation_17();
      };

void logarithm_4::input_14()
         {
           cout<<" Please enter the value of x.: ";
           cin>>n;
           cout<<" Thanks a lot for you.";
         }

void logarithm_4::summation_17()
         {
           int p=2;
           double q,sum=0;
           for(;;)
             {
               q=pow(n,p);
               if(q/p>200)
                   break;
               else
                   sum=sum+(q/p);
                   p+=2;
             }
           sum=sum*(-2);
           cout<<"\n The total sum of the series of ln((1+x)*(1-x))is : "<<sum;
         }

/**************************** MAIN FUNCTION *********************************/

int main()
    {
      int choice;
      sinx v;
      cosx u;
      power_1 w;
      power_2 y;
      logarithm_1 z;
      logarithm_2 t;
      inverse_1 o;
      inverse_2 k;
      inverse_3 l;
      inverse_4 a;
      inverse_5 b;
      inverse_6 c;
      inverse_7 d;
      inverse_8 e;
      inverse_9 f;
      logarithm_3 g;
      logarithm_4 h;

       
      do
      {
      cout<<"\n"<<'\t'<<"**************************************************"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<"  WELCOME TO THIS SERIES SUUMATION CALCULATOR. "<<" $"<<"\n";
      cout<<'\t'<<"*"<<" ----------------------------------------------"<<" $"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" series"<<'\t'<<'\t'<<'\t'<<" choice"<<'\t'<<'\t'<<" $"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<"--------"<<'\t'<<'\t'<<"--------"<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" sinx"<<"----------------------"<<"1"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" cosx"<<"----------------------"<<"2"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" pow(e,x)"<<"------------------"<<"3"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" pow(e,-x)"<<"-----------------"<<"4"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" ln(1+x)"<<"-------------------"<<"5"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" ln(1-x)"<<"-------------------"<<"6"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" tan inverse x"<<"-------------"<<"7"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" (1-x)^-1"<<"------------------"<<"8"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" (1+x)^-1"<<"------------------"<<"9"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" (1-x)^-2"<<"-----------------"<<"10"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" (1+x)^-2"<<"-----------------"<<"11"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" (1-x)^-3"<<"-----------------"<<"12"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" (1+x)^-3"<<"-----------------"<<"13"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" (e^x+e^-x)"<<"---------------"<<"14"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" (e^x-e^-x)"<<"---------------"<<"15"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" log((1+x)/(1-x))"<<"---------"<<"16"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" log((1+x)*(1-x))"<<"---------"<<"17"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<" Exit the program"<<"---------"<<"18"<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"*"<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<" *"<<"\n";
      cout<<'\t'<<"**************************************************"<<"\n";
      cout<<"\n Now please enter your choice : ";
      cin>>choice;
      switch(choice)
         {
           case 1:
              v.convert_1();
              v.summation_1();

              break;
           case 2:
              u.convert_2();
              u.summation_2();
              break;
           case 3:
              w.input_1();
              w.summation_3();
              break;
           case 4:
              y.input_2();
              y.summation_4();
              break;
           case 5:
              z.input_3();
              z.summation_5();
              break;
           case 6:
              t.input_4();
              t.summation_6();
              break;
           case 7:
              o.convert_7();
              o.summation_7();
              break;
           case 8:
              k.input_5();
              k.summation_8();
              break;
           case 9:
              l.input_6();
              l.summation_9();
              break;
           case 10:
              a.input_7();
              a.summation_10();
              break;
           case 11:
              b.input_8();
              b.summation_11();
              break;
           case 12:
              c.input_9();
              c.summation_12();
              break;
           case 13:
              d.input_10();
              d.summation_13();
              break;
           case 14:
              e.input_11();
              e.summation_14();
              break;
           case 15:
              f.input_12();
              f.summation_15();
              break;
           case 16:
              g.input_13();
              g.summation_16();
              break;
           case 17:
              h.input_14();
              h.summation_17();
              break;

           case 18:
              break;
           default:
             cout<<"You are wrong.Please try again.";
         }
    }
      while(choice!=18);
      getch();
      return 0;
    }


