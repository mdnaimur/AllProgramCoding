

//Information About Rainfall in Bangladesh.
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>
using namespace std;
class bangla
    {
        int x,z;
public :
        int m;
        char w[40];//    in put
        int in(void);
        int f(char *s);
        std::fstream file;
    };
int bangla ::f(char *s)
    {
    z=0;
     
    //textcolor(14);
    file.open(s,ios::in);
            file.seekg(0);
            char c;
            cout<<"\n";
            while(file)
                {
                file.get(c);
                z++;
                //delay(60);
                cout<<c;
                }
           if(z>0)
           getch();
    file.close();
    return z;
    }
int bangla ::in(void)
    {
    //textcolor(2);
    printf("\n\r1 FOR DHAKA\n\r2 FOR KHULNA\n\r3 FOR CHITTAGONG\n\r4 FOR SYLHET\n\r5 FOR RAJSHAHI\n\r6 FOR BORISAL\n\n\nENTER YOUR CHOICE  ::  ");
    cin>>x;
    return x;
    }

class dhaka :virtual public bangla
    {
    public :
        void get1();
    };

void dhaka ::get1(void)
         {
          
    //textcolor(3);
    printf("\r\nthere are several areas .......\r\ncomilla\r\ngajipur...\r\n\nchoose any one from these 3 below :: \r\ncomilla\r\ngajipur\r\nsavar\r\n\n");
    cin>>w;
    strcat(w,".txt");
    m=f(w);
    if(m==0)
        {
        cout<<"invalid name";
        getch();
        }
    else
        m=0;

    }

class a1 :virtual public dhaka        //derived class from dhaka ...
    {
        int m1;
    public :
        int show1(void){m1=37;return m1;};
    };
class a2 :virtual public dhaka        //derived class from dhaka ...
    {
        int m2;
    public :
        int show2(void){m2=87;return m2;};
    };

class kulna :virtual public bangla
    {
    public :
        void get2();
    };
void kulna ::get2(void)
      {
       
    //textcolor(3);
    printf("\r\nthere are several areas .......\r\nnoapara\r\ndoulatpur...\r\n\nchoose any one from these 3 below :: \r\nfulbari\r\nnoapara\r\nfaridpur\r\n\n");
    cin>>w;
    strcat(w,".txt");
    m=f(w);

     if(m==0)
        {
        cout<<"invalid name";
        getch();
        }
    else
        m=0;
      }
class a3 :virtual public kulna        //derived class from khulna ...
    {
        int m3;
    public :
        int show3(void){m3=27;return m3;};
    };

class a4 :virtual public kulna        //derived class from khulna ...
    {
        int m4;
    public :
        int show4(void){m4=88;return m4;};
    };

class  chittagong : virtual public bangla
    {

    public :
        void get3();
    };
void chittagong ::get3(void)
         {
          
    //textcolor(3);
    printf("\r\nthere are several areas .......\r\nbb2\r\nbb3...\r\n\nchoose any one from these 3 below :: \r\nbb1\r\nbb2\r\nbb3\r\n\n");
    cin>>w;
    strcat(w,".txt");
       m=f(w);
        if(m==0)
        {
        cout<<"invalid name";
        getch();
        }
    else
        m=0;
        }

class a5 :virtual public chittagong        //derived class from chittagong ...
    {
        int m5;
    public :
        int show5(void){m5=33;return m5;};
    };
class a6 :virtual public chittagong        //derived class from chittagong ...
    {
        int m6;
    public :
        int show6(void){m6=99;return m6;};
    };

class  sylhet : virtual public bangla
    {
    public :
        void get4();
    };
void sylhet ::get4(void)
         {
          
    //textcolor(3);
    printf("\r\nthere are several areas .......\r\naa1\r\naa2...\r\n\nchoose any one from these 3 below :: \r\naa1\r\naa2\r\naa3\r\n\n");
    cin>>w;
    strcat(w,".txt");
    m=f(w);
    if(m==0)
        {
        cout<<"invalid name";
        getch();
        }
    else
        m=0;
        }

class a7 :virtual public sylhet        //derived class from chittagong ...
    {
        int m7;
    public :
        int show7(void){m7=21;return m7;};
    };
class a8 :virtual public sylhet
    {
        int m8;
    public :
        int show8(void){m8=71;return m8;};
    };

class  rajshahi : virtual public bangla
    {
    public :
        void get5();
    };
void rajshahi ::get5(void)
         {
          
    //textcolor(3);
    printf("\r\nthere are several areas .......\r\nchapai\r\ndinajpur...\r\n\nchoose any one from these 3 below :: \r\nnator\r\ndinajpur\r\nbogra\r\n\n");
    cin>>w;
    strcat(w,".txt");
    m=f(w);
    if(m==0)
        {
        cout<<"invalid name";
        getch();
        }
    else
        m=0;
        }

class a9 :virtual public rajshahi        //derived class from chittagong ...
    {
        int m9;
    public :
        int show9(void){m9=45;return m9;};
    };
class a10 :virtual public rajshahi
    {
        int m10;
    public :
        int show10(void){m10=110;return m10;};
    };

class  borisal : virtual public bangla
    {

    public :
        void get6();
    };
void borisal ::get6(void)
         {
          
    //textcolor(3);
    printf("\r\nthere are several areas .......\r\ncc1\r\ncc2...\r\n\nchoose any one from these 3 below :: \r\ncc1\r\ncc2\r\ncc3\r\n\n");
    cin>>w;
    strcat(w,".txt");
    m=f(w);
    if(m==0)
        {
        cout<<"invalid name";
        getch();
        }

    else
        m=0;
        }

class a11 :virtual public borisal        //derived class from chittagong ...
    {
        int m11;
    public :
        int show11(void){m11=49;return m11;};
    };
class a12 :virtual public borisal
    {
        int m12;
    public :
        int show12(void){m12=130;return m12;};
    };

class out :virtual public a1,public a2,public a3,public a4,public a5,public a6,public a7,public a8,public a9,public a10,public a11,public a12
    {
        int x[12];
    public :
        out(){//textcolor(11);
             printf("\n\n\n\nthis is a project on rainfall in bangladesh\r\n");
             };
        void sec(int);
        void av();

    };
void out ::sec(int x)
{

char s[20];
    if(x==1)
{
strcpy(s,"50");
strcat(s,".txt");
}
    else if(x==2)
{
strcpy(s,"100");
strcat(s,".txt");
}
    file.open(s,ios::in);
            file.seekg(0);
            char c;
            cout<<"\n";
            while(file)
                {
                file.get(c);
                //delay(60);
                cout<<c;
                }
getch();
}

void out ::av(void)
    {
    x[0]=show1();
    x[1]=show2();
    x[2]=show3();
    x[3]=show4();
    x[4]=show5();
    x[5]=show6();
    x[6]=show7();
    x[7]=show8();
    x[8]=show9();
    x[9]=show10();
    x[10]=show11();
    x[11]=show12();
float average,sum=0;
for(int i=0;i<12;i++)
    {
    sum=sum+x[i];
    }
average=sum/12;

cout<<"average rainfall in bangladesh ::  "<<average;
getch();


    }


int main()
{
    while(1)
{
     
    out a;

cout<<"\n\nIF YOU WANT TO GET INFORMATION ABOUT A PARTICULAR AREA PRESS 1\n\nIF YOU WANT TO GET AN AVERAGE IDEA THEN PRESS 2\n\nIF YOU WANT TO KNOW THE AVERAGE RAINFALL IN BANGLADESH PRESS 3\n\nTO EXIT PRESS 0\n\n";
int choice;
cin>>choice;
          
if(choice==0)
{
for(int k=0;k<20;k++)
cout<<"\n";
cout<<"\t\t\t\tGOOD BYE";
    break;
}

if(choice==1)
    {
    int p=a.in();
    switch(p)
        {
        case 1:
            //textcolor(6);
            a.get1();
            break;
        case 2:
            //textcolor(6);
            a.get2();
            break;
        case 3:
            //textcolor(6);
            a.get3();
            break;
        case 4:
            //textcolor(6);
            a.get4();
            break;
        case 5:
            //textcolor(6);
            a.get5();
            break;
        case 6:
            //textcolor(6);
            a.get6();
            break;
        }

    }

if(choice==2)
    {
    int y;
    cout<<"1 for below 50\n\n2 for above 50\n\n";
    cin>>y;
    a.sec(y);
    }

if(choice==3)
    {
    a.av();
    }

}
    getch();
    return 0;
}

