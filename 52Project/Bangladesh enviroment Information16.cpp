#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Dhaka
{
    private:

         char name[50];
         int rain;
         int humidity;
         char soil[50];
         char kind[50];

    public:

         void get(char*,char*,char*);
         void show()
         {
              
             cout<<"Name          : Dhaka.";
             cout<<"\nSoil colour : Red.";
             cout<<"\nRain        : Near30-50%";
             cout<<"\nHumidity    : Near20-40%";
             cout<<"\nsoilkind    : Normal";
         }
};

void Dhaka::get(char *n,char *a,char *g)
{
     strcpy(name,n);
     strcpy(soil,a);
     strcpy(kind,g);
     cout<<"Enter rain:";
     cin>>rain;
     cout<<"Enter humidity:";
     cin>>humidity;

    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nRain fall   : "<<rain
         <<"\nHumidity    : "<<humidity;

    if (rain<30 || humidity<20)
        cout<<"\n\nThe area is near Tangail.";
    else if (rain>=30 && rain<35 || humidity>=20 && humidity<25)
        cout<<"\n\nThe area is near Gajipur.";
    else if(rain>=35 && rain<40 || humidity>=25 && humidity<30)
        cout<<"\n\nThe area is near Dhaka.";
    else if (rain>=40 && rain<45 || humidity>=30 && humidity<35)
        cout<<"\n\nThe area is near Jamalpur.";
    else if (rain>=45 && rain<50 || humidity>=35 && humidity<40)
        cout<<"\n\nThe area is near Manikganj.";
    else if(rain>=50 || humidity>=40)
           cout<<"\n\nThe area is near Maimanshing.";
}

class Rajshahi
{
    private:
         char name[50];
         int rain;
         int humidity;
         char soil[50];
         char kind[50];
    public:
         void get(char*,char*,char*);
         void show()
         {
              
             cout<<"Name          : Rajshahi.";
             cout<<"\nSoil colour : Gray";
             cout<<"\nRain        : Near 35-55%";
             cout<<"\nHumidity    : Near 40-55%";
             cout<<"\nsoilkind    : Normal";
         }
};

void Rajshahi::get(char *n,char *a,char *g)
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;


    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nRain fall   : "<<rain
         <<"\nHumidity    : "<<humidity;

    if (rain<35 || humidity<40)
        cout<<"\n\nThe area is near Panchagar.";
    else if (rain>=35 && rain<40 || humidity>=40 && humidity<45)
        cout<<"\n\nThe area is near Dinajpur.";
    else if(rain>=40 && rain<45 || humidity>=45 && humidity<50)
        cout<<"\n\nThe area is near Rajshahi.";
    else if(rain>=45 && rain<55 || humidity>=50 && humidity<55)
        cout<<"\n\nThe area is near Bagura.";
    else if (rain>=55 || humidity>=55)
        cout<<"\n\nThe area is near Sirajganj.";
}

class Khulna
{
    private:
         char name[50];
         int rain;
         int humidity;
         char soil[50];
         char kind[50];
    public:
         void get(char*,char*,char*);
         void show()
         {
              
             cout<<"Name          : Khulna.";
             cout<<"\nSoil colour : Brown.";
             cout<<"\nRain        : Near 40-55%";
             cout<<"\nHumidity    : Near 55-65%";
             cout<<"\nsoilkind    : Salty";
         }
};

void Khulna ::get(char *n,char *a,char *g)
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;


    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nHumidity    : "<<humidity
         <<"\nRain fall   : "<<rain;
    if  (rain<40 || humidity<55)
        cout<<"\n\nThe area is near Satkhira.";
    else if (rain>=40 && rain<45 || humidity>=55 && humidity<60)
        cout<<"\n\nThe area is near Bagerhat.";
    else if(rain>=45 && rain<50 || humidity>=60 && humidity<65)
        cout<<"\n\nThe area is near Khulna.";
    else if(rain>=50 || humidity>=65)
        cout<<"\n\nThe area is near Jessore.";
}

class Barishal
{
    private:
         char name[50];
         int rain;
         int humidity;
         char soil[50];
         char kind[50];
    public:
         void get(char*,char*,char*);
         void show()
         {
              
             cout<<"Name          : Barishal.";
             cout<<"\nSoil colour : Black.";
             cout<<"\nRain        : Near 40-50%";
             cout<<"\nHumidity    : Near 65-75%";
             cout<<"\nsoilkind    : Salty";
         }
};

void Barishal ::get(char *n,char *a,char *g)
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;

    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nRain fall   : "<<rain
         <<"\nHumidity    : "<<humidity;

    if (rain<40 || humidity<65)
        cout<<"\n\nThe area is near Bhola.";
    else if (rain>=40 && rain<45 || humidity>=65 && humidity<70)
        cout<<"\n\nThe area is near Barishal.";
    else if(rain>=45 && rain<=50 || humidity>=70 && humidity<75)
        cout<<"\n\nThe area is near Barguna.";
    else if(rain>50 || humidity>=75)
        cout<<"\n\nThe area is near Jhalokathi.";
}

class Sylet
{
    private:
         char name[50];
         int rain;
         int humidity;
         char soil[50];
         char kind[50];
    public:
         void get(char*,char*,char*);
         void show()
         {
              
             cout<<"Name          : Sylet.";
             cout<<"\nSoil colour : Orange.";
             cout<<"\nRain        : Near 70-80%";
             cout<<"\nHumidity    : Near 75-85%";
             cout<<"\nsoilkind    : Normal";
         }
};

void Sylet ::get(char *n,char *a,char *g)
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;


    cout<<"\n\nArea name     : "<<name
        <<"\nSoil colour : "<<soil
        <<"\nSoil kind   : "<<kind
        <<"\nRain fall   : "<<rain
        <<"\nHumidity    : "<<humidity;

    if (rain<70 || humidity<75)
        cout<<"\n\nThe area is near Habiganj.";
    else if (rain>=70 && rain<75 || humidity>=75 && humidity<80)
        cout<<"\n\nThe area is near Moulavibazar.";
    else if(rain>=75 && rain<80 || humidity>=80 && humidity<85)
        cout<<"\n\nThe area is near Sunamganj.";
    else if(rain>=80 || humidity>=85)
        cout<<"\n\nThe area is near Sylet.";
}

class Chittagong
{
    private:
         char name[50];
         int rain;
         int humidity;
         char soil[50];
         char kind[50];
    public:
         void get(char*,char*,char*);
         void show()
         {
              
             cout<<"Name          : Chittagong.";
             cout<<"\nSoil colour : Green.";
             cout<<"\nRain        : Near50-65%";
             cout<<"\nHumidity    : Near85-95%";
             cout<<"\nsoilkind    : Salty";
         }
};

void Chittagong ::get(char *n,char *a,char *g)
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;

    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nRain fall   : "<<rain
         <<"\nHumidity    : "<<humidity;

    if (rain<50 || humidity<85)
        cout<<"\n\nThe area is near Feni.";
    else if (rain>=50 && rain<55 || humidity>=85 && humidity<87)
        cout<<"\n\nThe area is near Rangamati.";
    else if(rain>=55 && rain<60 || humidity>=87 && humidity<89)
        cout<<"\n\nThe area is near Chittagong.";
    else if(rain>=60 && rain<65 || humidity>=89 && humidity<95)
        cout<<"\n\nThe area is near Bandarban.";
    else if(rain>60 || humidity>=95)
        cout<<"\n\nThe area is near Coxes-Bazar.";
}


int main()
{
     
    int i,j,l;
    char a[50],n[50],g[50];

    Dhaka d;
    Rajshahi r;
    Khulna k;
    Barishal b;
    Sylet s;
    Chittagong c;

    while(1)
    {
    cout<<"1.See the properties of main citys.\n"
         <<"2.Search an area.\n"
         <<"3.Exit.\n\n"
         <<"\tChoose a no.: ";
         cin>>i;

        if(i==1)
        {
    while(1)
        {
             cout<<"\t1.Dhaka.\n"
             <<"\t2.Rajshahi.\n"
             <<"\t3.Khulna.\n"
             <<"\t4.Barishal.\n"
             <<"\t5.Sylet.\n"
             <<"\t6.Chittagong.\n"
             <<"\t7.Previous menu.\n\n"
             <<"\t\tChoose a number: ";
         cin>>j;
         if(j==1)
        {
                    d.show();
                    getch();
        }
        else if(j==2)
        {
                    r.show();
                    getch();
        }
        else if(j==3)
        {
                    k.show();
                    getch();
        }
        else if(j==4)
        {
                    b.show();
                    getch();
        }
         else if(j==5)
        {
                    s.show();
                    getch();
        }
         else if(j==6)
        {
                    c.show();
                    getch();
        }
        if(j==7)
                    break;
         
        }  //End of 1st while.
        }         //End of 1st if.

        else if(i==2)
        {
     cout<<"Enter name of the area: ";
     cin>>n;
     cout<<"Enter soil colour: ";
     cin>>a;
     if(stricmp(a,"red")==0)
         d.get(n,a,"normal");

     else if(stricmp(a,"gray")==0)
         r.get(n,a,"normal");

     else if(stricmp(a,"brown")==0)
         k.get(n,a,"salty");

     else if(stricmp(a,"black")==0)
         b.get(n,a,"salty");

     else if(stricmp(a,"orange")==0)
         s.get(n,a,"normal");

     else if(stricmp(a,"green")==0)
         c.get(n,a,"salty");

     else
         cout<<"The area is not belong to Bangladesh.";

     getch();
        }

        else if (i==3)
    break;
         
    }

    return 0;
}


