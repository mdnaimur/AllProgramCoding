


//Calculating Area Of Various Surfaces.
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
class sphere
{
    public:
        void spe(float r)
        {
            float v;
            v=(4*3.1416*pow(r,3))/3;
            cout.precision(4);
            cout<<"Volume of spehere ="<<v;
            cout<<"\nArea="<<4*3.1416*pow(r,2);
        }
};
class cone
{
    private:
        float x;
    public:
        void con(float r,float l)
        {
            cout.precision(4);
            cout<<"Curvature surface area:"<<3.1416*r*l;
            cout<<"\nArea of whole surface="<<3.1416*r*(r+l);
            cout<<"\nVolume="<<0.33*3.1416*pow(r,2)*l;
        }
};
class rcircyl
{
    public:
        void rcy(float r,float h)
        {
            cout.precision(4);
            cout<<"Curvature surface area:"<<2*3.1416*r*h;
            cout<<"\nArea of whole surface="<<2*3.1416*r*(r+h);
            cout<<"\nVolume="<<3.1416*pow(r,2)*h;
        }
};
class cube
{

    public:
        void cub(float a)
        {
            cout.precision(4);
            cout<<"Area="<<pow(a,2)*6;
            cout<<"\nVolume="<<pow(a,3);
            cout<<"\nDiagonal="<<a*sqrt(3);
        }
};
class cicle
{
    private:
        float dia;
    public:
        void cir(float r)
        {
            cout.precision(4);
            cout<<"Area="<<3.1416*pow(r,2);
            cout<<"\nPerimeter="<<2*3.1416*r;
        }
};
class rectang
{
    private:
        float a,b,c;
    public:
        void rec(float,float,float);
};
void rectang::rec(float x,float y,float z)
{
    cout.precision(4);
    cout<<"Area="<<x*y;
    cout<<"\nArea of whole surface="<<2*((x*y)+(y*z)+(z*x));
    cout<<"\nVolume="<<x*y*z;
    cout<<"\nDiagonal="<<sqrt(pow(x,2)+pow(y,2)+pow(z,2));
}
class trian
{
    private:
        float x,y;
    public:
        void show()
        {
            cout<<"1.Area by coordinate\n";
            cout<<"2.Area by length.\n3.Centroid.\n";
            cout<<"Enter your choice:";
        }
        void tri(float,float,float,float,float,float);
        void tri(float,float);
        void centroid(float,float,float,float,float,float);
};
void trian::tri(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float area,x,y,z;
    x=x1*(y2-y3);
    y=x2*(y3-y1);
    z=x3*(y1-y2);
    area=0.5*(x+y+z);
    cout<<"Required area = "<<area;
}
void trian::centroid(float x1,float y1,float x2,float y2,float x3,float y3)
{
    x=(x1+x2+x3)/3;
    y=(y1+y2+y3)/3;
    cout.precision(2);
    cout<<"centroid is("<<x<<","<<y<<")";
}
void trian::tri(float g,float l)
{
    float a;
    a=.5*g*l;
    cout<<"Area of triangle ="<<a;
}
class measure:public trian,public rectang,public cicle,public cube,public rcircyl,public cone,public sphere
{
    private:
        int m;
    public:
        void spehere(float);
        void show();
};




class control:public trian
{
    public:
        void display()
        {       cout<<"   WHAT KIND OF SHAPE YOU WANT TO MEASURE.\n\n";
            cout<<"1. Triangle.\n2. Rectangle."<<endl;
            cout<<"3. Circle.\n4. Cube.\n";
            cout<<"5. Right circular cylindar.\n";
            cout<<"6. Right circular cone.\n";
            cout<<"7. Sphere.\n";
            cout<<"8. Quit.\n"<<endl;
            cout<<"   Enter your choice:";
        }

};
int main()
{
    control con;int sc,sc1;float x1,y1,x2,y2,x3,y3;
    measure mea;
    
    con.display();
    cin>>sc;
    while(sc!=8)
    {
         
        switch(sc)
        {
            case 1:
            {
                con.show();
                cin>>sc1;
                if(sc1==1)
                {
                     
                    cout<<"Enter coordinates:";
                    cin>>x1>>y1>>x2>>y2>>x3>>y3;
                    mea.tri(x1,y1,x2,y2,x3,y3);
                    getch();
                }
                else if(sc1==2)
                {
                     
                    cout<<"Enter base & height:";
                    cin>>x1>>y1;
                    mea.tri(x1,y1);
                    getch();
                }
                else
                {
                     
                    cout<<"Enter coordinates:";
                    cin>>x1>>y1>>x2>>y2>>x3>>y3;
                    mea.centroid(x1,y1,x2,y2,x3,y3);
                    getch();
                }

            }break;
            case 2:
            {
                cout<<"Enter the values of edge a,b,c:";
                cin>>x1>>x2>>x3;
                mea.rec(x1,x2,x3);
                getch();
            }break;
            case 3:
            {
                cout<<"Enter the radius:";
                cin>>x1;
                mea.cir(x1);
                getch();
            }break;
            case 4:
            {
                cout<<"Enter the value of edge :";
                cin>>x1;
                mea.cub(x1);
                getch();
            }break;
            case 5:
            {
                cout<<"Enter radius and height:";
                cin>>x1>>y1;
                mea.rcy(x1,y1);
                getch();
            }break;
            case 6:
            {
                cout<<"Enter radius and length:";
                cin>>x1>>y1;
                mea.con(x1,y1);
                getch();
            }break;
            case 7:
            {
                cout<<"Enter the radius:";
                cin>>x1;
                mea.spe(x1);
                getch();
            }break;

        }
         
        con.display();
        cin>>sc;
    }
}

///////////////////////////////////////////////////////////////////////////

