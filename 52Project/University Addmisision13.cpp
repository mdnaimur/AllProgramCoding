#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class admission
          {
          };
class buet : public admission
              {
                   public:
                   void seeb()
                   {     cout<<"******************THIS IS BUET CAMPUS.*************"<<endl
                 <<endl<<"Grades IN Different Subjects Are Given Below."<<endl
                 <<endl<<"The Applicant Must Get G.P.A. 4.0 Out of G.P.A. 5.0 In H.S.C."
                 <<endl
                 <<" In Physics:=4.5(gp)"<<endl<<"In Chemistry:=4.5(gp)"<<endl
                 <<"In Mathematics:=4.5(gp)"<<endl<<"In English:=4.5(gp)"<<endl<<
                 "And At least G.P.A. 3.0 In Every Subject."<<endl<<endl<<
                 "The Total G.P.A. of Four Subjects is :=18"<<endl<<endl;
              }
              };
class kuet : public admission
              {
                public:
                 void seek()
                 {    cout<<"****************THIS IS  KUET CAMPUS.*****************"
                <<endl;
                cout<<"The Requirements Of Giving Addmission Test are given Below."
                <<endl<<endl<<"In Physics:=3.5 (gp)."<<endl<<"In Chemistry:=3.5(gp)."<<endl
                <<"In Mathematics:=3.5 (gp)."<<endl<<"In English:=3.5(gp)."<<endl
                <<endl<<"The Applicant Must Get At Least G.P.A. 3.5 In Every Subject."
                <<endl<<endl<<"The Total Of These Four Subjects Should Be :=17."
                <<endl<<endl;
                  }
              };
class cuet : public admission
              {
              public:
              void seec()
              {
              cout<<"***************** THIS IS CUET CAMPUS.*************.\n \n"
              <<"THE REQUIREMENTS ARE GIVEN BELOW.\n \n"
              <<"IN PHYSICS := 3.5 (G.P.A.)\n";
              cout<<" IN CHEMISTRY := 3.5  (G.P.A.)\n"
              <<"IN MATHEMATICS := 3.5 (G.P.A.)\n"
              <<"IN ENGLISH := 3.5 (G.P.A.)\n";
              cout<<"THE AVERAGE G.P.A. WILL BE := 4 (G.P.A.)  IN PER SUBJECTS.\n\n";
              }
              };
class ruet:public admission
              {
              public:
              void seer()
              {
               cout<<"*********** THIS IS RUET CAMPUS ************.\n \n"
               <<"THE REQUIREMENTS ARE GIVEN BELOW. \n \n"
               <<"IN PHYSICS := 3.5 (G.P.A.)\n"
               <<"IN CHEMISTRY := 3.5 (G.P.A.)\n"
               <<"IN MATHEMATIS := 3.5 (G.P.A.)\n \n";
               cout<<"THE AVERAGE G.P.A. IN THREE SUBJECTS WILL BE := 4 (G.P.A.)\n";
              }
              };
class ku : public admission
              {
              public:
              void seeku()
              {
                 cout<<"********************THIS IS  KHULNA UNIVERSITY.********************"
                 <<endl<<endl<<"The Requirements Are Given Below."<<endl<<endl<<
                 "The Applicant Must Get G.P.A. 3.5 In Both  S.S.C. AND IN H.S.C. "
                 <<endl<<"The Applicant Must Be Passed in the Year 2006/2007."<<endl
                 <<endl<<"In Physics :=3.0"<<endl<<"In Chemistry :=3.0"
                 <<endl<<"In Mathematics :=3.0"<<endl<<endl
                 <<"And The Total Grade Point In H.S.C. is :=3.50"<<endl<<endl
                 <<"SUBJECTS OF ENGINEERING DEPARTMENT :-"<<endl<<endl
                 <<"Computer Science & Engineering Decipline."<<endl
                 <<"Electronics & Communication Engineering decipline."<<endl
                 <<"And Mathematics Decipline."<<endl<<"Architecture Decipline."
                 <<endl<<"Town & Village decipline."<<endl<<endl
                 <<"THE SUBJECTS OF LIVESCIENCE DEPARTMENT."<<endl<<endl<<"Pharmacy"
                 <<endl<<"Genetics  & Biotechnology."<<endl
                 <<"Fisheries & Marine Rersource Technology."<<endl
                 <<"Environmental Science."<<""
                 <<endl<<"Soil Science."<<endl<<endl;
              }
              };
class du : public admission
              {
              public:
              void seedu()
              {
                cout<<"****************THIS IS DHAKA UNIVERSITY.******************"<<endl<<endl;
                cout<<"The requirements are given below."<<endl<<endl;
                cout<<"Total grade point is seven to give addmission."<<endl<<endl;
                   }
                };
class ru : public admission
              {
              public:
              void seeru()
              {
                cout<<"**************** THIS IS RAJSHAHI UNIVERSITY. ***************"
                <<endl<<endl<<"The applicant must get a total G.P.A. 6.5 in total. "
                <<endl<<"Without fourth Subject."<<endl<<endl
                <<"THe Applicant must get at least G.P.A.  3.0 in Both S.S.C. & H.S.C."
                <<endl<<endl<<"THE SUBJECTS ARE."<<endl<<endl
                <<"Mathematics."<<endl<<"Physics."<<endl<<"Chemistry."<<endl
                <<"Statistics."<<endl<<"Applied Physics & Electronic Engineering"
                <<endl<<"Applied Chemistry & Chemical Technology."<<endl
                <<"Biochemistry & Molecularlive science."<<endl<<"Pharmacy."<<endl
                <<"Computer Science & Engineering."<<endl
                <<"Population science & Human Resource Devolopment."
                <<endl<<"Information & Communication Engineering."
                <<endl<<"Applied Mathematics."<<endl<<"Materials Science & Technology."
                <<endl<<endl;
              }
              };
class su : public admission
              {
              public:
              void seesu()
              {
                 cout<<"*********THIS IS SAHAZALAL UNIVERSITY OF SCIENCE & TECHNONOLOGY.**********"
                 <<endl<<endl
                 <<"The Applicant must get At Least G.P.A. 2.5 In Both H.S.C."
                 <<" & S.S.C. With a total G.P.A. Of 5.75 ."
                 <<endl<<endl
                 <<"****For PHYSICS , COMPUTER SCIENCE & ENGINEERING , INDUSTRIAL & PRODUCTION"
                 <<" Engineering , Architecture.********"<<endl<<endl
                 <<"In Physics G.P.A. 2.0."<<endl<<"In Mathematics G.P.A. 2.0."
                 <<endl<<endl
                 <<"********FOR Civil & ENVIRONMENTAL ENGINEERING , PETROLIUM & GEORESOURCE"
                 <<" Engineering.*******"<<endl<<endl
                 <<"In physics G.P.A. 2.0."<<endl<<"In Chemistry G.P.A. 2.0."
                 <<endl<<"In Mathematics G.P.A. 2.0."<<endl<<endl
                 <<"*********FOR CHEMISTRY , CHEMICAL ENGINEERING & POLIMER SCIENCE.*********"
                 <<endl<<endl<<"In Chemistry G.P.A.  2.0."<<endl
                 <<"And In Mathematics G.P.A.  2.0."<<endl<<endl
                 <<"*******FOR FORESTRY , BIOTECHNOLOGY , FOOD & TEA TECHNOLOGY , GENETICS.********"
                 <<endl<<endl<<"In Biology G.P.A.  2.0."<<endl
                 <<"And In Mathematics G.P.A.  2.0."<<endl<<endl
                 <<"********************FOR MATHEMATICS , STATISTICS.****************"
                 <<endl<<endl<<"In Mathematics G.P.A.  2.0."<<endl<<endl;
              }
              };
class zu : public admission
              {
              public:
              void seezu()
              {
                 cout<<"****************THIS IS ZAHANGIRNAGAR UNIVERSITY.****************"
                 <<endl<<endl
                 <<"The Applicant Must Get G.P.A.  2.50  In H.S.C. In The Year 2006/2007."
                 <<endl<<"And Should get 'C' Grade At least In Two Subject."
                 <<endl<<endl
                 <<"The Total G.P.A. In  H.S.C & S.S.C.  Is  At Least  6.0 To apply.\n \n"<<endl;
              }
              } ;
class cu : public admission
              {
              public:
              void seecu()
              {
                cout<<"************* THIS IS CHITTAGONG UNIVERSITY. ***************"
                <<endl<<endl<<"***** For  'A' & 'H'  Unit The Requirements Are.****"
                <<endl<<"The Applicant Must Pass S.S.C. In The Year 2003 to 2005."<<endl
                <<"The Applicant Must Pass H.S.C. In The Year 2006/2007."<<endl
                <<"The Applicant Must Get A Total G.P.A. Of  6.0 Without Fourth Subject."
                <<endl<<"But The Applicant Must Get G.P.A. 2.5 In Both H.S.C. And S.S.C."
                <<endl<<endl
                <<"************The Subjects Of  'A' Unit . ******************"
                <<endl<<endl<<"Physics."<<endl<<"Chemistry."<<endl<<"Mathematics."
                <<endl<<"Statistics."<<endl<<"Computer Science & applied Physics."
                <<endl<<"And Electronics Department."<<endl<<endl
                <<"************ The Subjects OF  'H'  Unit. *****************"
                <<endl<<endl<<"Goology."<<endl<<"Botany."<<endl
                <<"Livechemistry & Molecularlive science."<<endl
                <<"Microbiology."<<endl<<"Geography & Environmental Science."<<endl
                <<"Soil Science."<<endl<<"And Genetic Engineering Department."<<endl
                <<endl;
              }
               };
class grade:public kuet,public buet,public cuet,public ruet
,public du,public ku,public cu,public ru,public zu,public su
{
private:
      float p,c,m,e,b,hsc,ssc;
public:
     void setgrade(void);
     void setkb(void);
     void provek(void);
     void proveb(void);
     void prover(void);
     void provec(void);
     void proveru(void);
     void proveku(void);
     void provedu(void);
     void provesu(void);
     void provecu(void);
     void provezu(void);
};
void grade::setgrade()
{
  cout<<"Enter the  G.P.A. of Physics:=";
 cin>>p;
 while(p>5.0)
 {
 cout<<"Please reenter G.P.A of Phsics:=";
 cin>>p;
 }
 cout<<"Enter the  G.P.A. of Chemistry:=";
 cin>>c;
  while(c>5.0)
 {
 cout<<"Please reenter G.P.A of Chemistry:=";
 cin>>c;
 }
 cout<<"Enter the  G.P.A. of Mathematics:=";
 cin>>m;
  while(m>5.0)
 {
 cout<<"Please reenter G.P.A of Mathematics:=";
 cin>>m;
 }
 cout<<"Enter the  G.P.A. of English:=";
 cin>>e;
  while(e>5.0)
 {
 cout<<"Please reenter G.P.A of English:=";
 cin>>e;
 }
cout<<"Enter the  G.P.A. of Biology:=";
 cin>>b;
  while(b>5.0)
 {
 cout<<"Please reenter G.P.A of Biology:=";
 cin>>b;
 }
 cout<<"Total G.P.A. In H.S.C.(Without fourth Subject.):= ";
 cin>>hsc;
 cout<<"Total G.P.A. in S.S.C.(Without fourth subject.):= ";
 cin>>ssc;
}
void grade ::setkb(void)
{
 cout<<"Enter the  G.P.A. of Physics:=";
 cin>>p;
 while(p>5.0)
 {
 cout<<"Please reenter G.P.A of Phsics:=";
 cin>>p;
 }
 cout<<"Enter the  G.P.A. of Chemistry:=";
 cin>>c;
  while(c>5.0)
 {
 cout<<"Please reenter G.P.A of Chemistry:=";
 cin>>c;
 }
 cout<<"Enter the  G.P.A. of Mathematics:=";
 cin>>m;
  while(m>5.0)
 {
 cout<<"Please reenter G.P.A of Mathematics:=";
 cin>>m;
 }
 cout<<"Enter the  G.P.A. of English:=";
 cin>>e;
  while(e>5.0)
 {
 cout<<"Please reenter G.P.A of English:=";
 cin>>e;
 }
}
void grade::provek(void)
{
    float t;
    t=p+c+m+e;
    if(p<3.5)
    cout<<"He is weak in physics."<<endl;
   if(c<3.5)
    cout<<"He is weak in chemistry."<<endl;
  if(m<3.5)
    cout<<"He is weak in mathematics."<<endl;
  if(e<3.5)
    cout<<"He is weak in english"<<endl;
  cout<<endl<<endl;
    if(t<17.0)
    {
    cout<<"THE APPLICANT CAN NOT APPLY FOR KUET."<<endl;
    cout<<"Because his/her total gp is :="<<t<<endl;
    cout<<"The requirwments are:="<<"\n \n";

  seek();
    }
    if(t>=17)
    if(p>=3.5&&p<=5.0)
    if(c>=3.5&&c<=5.0)
    if(m>=3.5&&m<=5.0)
    if(e>=3.5&&e<=5.0)
    {
    cout<<"The applicant can apply for KUET."<<endl;
    cout<<"Because his/her total gp is :="<<t<<endl;
    }
  if(t>=17.0)
  {
  if(p<3.5||c<3.5||m<3.5||e<3.5)
  {
  cout<<"He CAN NOT APPLY FOR KUET.\n \n";
  seek();
  }
}
}
void grade :: proveb(void)
{
  float t;
  t=p+c+m+e;
   if(p<3.0)
    {
    cout<<"He is weak in physics."<<endl;
    }
    if(c<3.0)
    {
    cout<<"He is weak in chemistry."<<endl;
    }
    if(m<3.0)
    {
    cout<<"He is weak in mathematics."<<endl;
    }
    if(e<3.0)
    {
    cout<<"He is weak in english."<<endl;
    }
   cout<<endl<<endl;
  if(t<18.0)
  {
  cout<<"He is UNAPPLICABLE in BUET."<<endl;
  cout<<" Because his total is:="<<t<<endl;
  cout<<"The requirements are :="<<"\n \n";
  seeb();
  }
  if(t>=18.0&&t<=20)
  if(p>=3.0&&p<=5.0)
  if(c>=3.0&&c<=5.0)
  if(m>=3.0&&m<=5.0)
  if(e>=3.0&&e<=5.0)
  {
  cout<<"The applicant can apply for BUET."<<endl;
    cout<<" Because his total is:="<<t<<endl;
    }
if(t>=18.0)
{
if(p<3.0||c<3.0||m<3.0||e<3.0)
{
cout<<"HE IS UNAPPLICABLE IN BUET. \n \n";
seeb();
}
}
}
void grade::prover(void)
{
  float t;
  t=p+c+m;
  ruet r;
     if(p<3.5)
    {
    cout<<"He is weak in physics."<<endl;
    }
    if(c<3.5)
    {
    cout<<"He is weak in chemistry."<<endl;
    }
    if(m<3.5)
    {
    cout<<"He is weak in mathematics."<<endl;
    }
   cout<<endl<<endl;
  if(t<12)
  {
  cout<<"The apllicant can not apply for RUET."<<endl;
  cout<<"Because his totatal is :="<<t<<endl<<"\n";
  seer();
  }

    if(t>=12)
    if(p>=3.5&&p<=5.0)
    if(c>=3.5&&c<=5.0)
    if(m>=3.5&&m<=5.0)
    {
    cout<<"The applicant can apply for RUET."<<endl<<endl;
    cout<<"Because  his total GPA in 3 subjects are:="<<t<<endl;
    }
   if(t>=12.0)
   {
   if(p<3.5||c<3.5||m<3.5)
   {
   cout<<"HE IS UNAPPLICABLE FOR RUET. \n \n";
   seer();
   }
 }
}
void grade:: provec(void)
{
  float t;
  t=p+c+m;
if(p<3.5)
 {
 cout<<"He is weak in Physics."<<endl;
 }
  if(c<3.5)
  {
  cout<<"He is weak in Chemistry."<<endl;
  }
  if(m<3.5)
  {
  cout<<"He is Weak in Mathematics."<<endl;
  }
  if(ssc<4.0)
  {
  cout<<"He is weak in S.S.C. G.P.A.\n";
  }
  if(hsc<4.0)
  {
  cout<<"He is weak in H.S.C. G.P.A.\n";
  }
  cout<<endl<<endl;
  if(t<12)
  {
  cout<<"He can not apply for CUET."<<endl;
  cout<<"Because his total in 3 subjects is:="<<t<<endl<<"\n";
  seec();
  }
  if(t>=12)
   if(hsc>=4.0)
   if(ssc>=4.0&&ssc<=5.0)
  if(p>=3.5&&p<=5.0)
  if(c>=3.5&&c<=5.0)
  if(m>=3.5&&m<=5.0)
  if(e>=3.5&&e<=5.0)
  {
  cout<<"The applicant can apply for CUET."<<endl;
  cout<<"Because his total in 3 Subjects is:="<<t<<endl;
  }
  if(t>=12.0)
  {
  if(p<3.5||c<3.5||m<3.5||e<3.5)
  {
   cout<<"HE IS UNAPPLICABLE FOR CUET. \n \n";
  seec();
   }
  }
}
void grade::proveru(void)
{
float r=(hsc+ssc);
if(p<2.0)
 {
 cout<<"He is weak in Physics."<<endl;
 }
  if(c<2.0)
  {
  cout<<"He is weak in Chemistry."<<endl;
  }
  if(m<2.0)
  {
  cout<<"He is Weak in Mathematics."<<endl;
  }
  if(hsc<3.0)
  {
  cout<<"He is weak in H.S.C. G.P.A.\n";
  }
  if(ssc<3.0)
  {
  cout<<"He is weak in S.S.C. G.P.A.\n";
  }
 if(r<6.5)
 {
 cout<<"HE is unapplicable in Rajshahi University."<<endl;
 cout<<"Because  HIS TOTAL OF H.S.C. & S.S.C.  G.P.A. is less."<<endl;
 seeru();
 cout<<"\n \n";
 }
  if(r>=6.5)
  if(hsc>=3.0)
  if(ssc>=3.0)
  if(p>=2.0&&c>=2.0)
  if(b>=2.0&&m>=2.0)
  if(e>=2.0)
  {
  cout<<"He can apply for Rajshahi University."<<endl;
  }
  if(r>=6.5)
  {
  if(hsc<3.0||ssc<3.0||p<2.0||c<2.0||b<2.0||m<2.0||e<2.0)
  {
  cout<<"HE IS UNAPPLICABLE IN RAJSHAHI UNIVERSITY.\n \n";
  seeru();
  }
  }
 }
void grade::proveku(void)
{
if(e<2.5)
{
cout<<"\n HE IS WEAK IN ENLISH.\n";
}
if(p<2.0)
 {
 cout<<"He is weak in Physics."<<endl;
 }
  if(c<2.0)
  {
  cout<<"He is weak in Chemistry."<<endl;
  }
  if(m<2.0)
  {
  cout<<"He is Weak in Mathematics."<<endl;
  }
  if(hsc<2.5)
  {
  cout<<"He is weak in H.S.C. G.P.A.\n";
  }
  if(ssc<2.5)
  {
  cout<<"He is weak in S.S.C. G.P.A.\n";
  }
 if(e>=2.5)
 if(hsc>=2.5&&ssc>=2.5)
 if(p>=2.0)
 if(c>=2.0)
 if(m>=2.0)
 if(b>=2.0)
 {
 cout<<"He is APPLICABLE FOR KHULNA UNIVERSITY.\n";
  }

   if(p<2.0||c<2.0||m<2.0||b<2.0||e<2.5||hsc<2.5||ssc<2.5)
  {
  cout<<"He CAN NOT APPLY FOR KHULNA UNIVERSITY.\n \n";
  seeku();
  }
  }
 void grade::provedu(void)
 {
   float r=(hsc+ssc);
   if(r>=7.0)
   if(p>=1.0&&c>=1.0)
   if(m>=1.0&&b>=1.0)
   {
   cout<<"HE IS APPLICABLE FOR DHAKA UNIVERSITY.\n \n";
   }
   if(r<7.0||p<1.0||c<1.0||m<1.0||b<1.0)
   {
   cout<<"HE IS  NOT APPLICABLE FOR DHAKA UNIVERSITY.\n \n";
   seedu();
   }
   }
void grade::provesu(void)
{
 float r;
 r=(hsc+ssc);

 if(hsc<2.5)
 {
 cout<<"HIS H.S.C. G.P.A. IS NOT SUFFICIENT.\n";
 }
if(ssc<2.5)
 {
 cout<<"HIS S.S.C. G.P.A. IS NOT SUFFICIENT.\n";
 }
  if(r<5.75)
 {
 cout<<"HIS TOTAL OF H.S.C. & S.S.C. IS NOT SUFFICIENT.\n";
 seesu();
 }
if(r>=5.75)
if(hsc>=2.5)
if(ssc>=2.5)
if(p>=2.0)
if(c>=2.0)
if(m>=2.0)
if(b>=2.0)
 {
 cout<<"HE IS APPLICABLE FOR SAHAJALAL UNIVERSITY.\n";
 }
if(r>=5.75)
{
if(hsc<2.5||ssc<2.5||p<2.0||c<2.0||m<2.0||b<2.0)
 {
 cout<<"HE IS NOT APPLICABLE FOR SAHAJALAL UNIVERSITY.\n \n";
 seesu();
 }
 }
 }
void grade::provecu(void)
{
float r=(hsc+ssc);
if(r<6.0||hsc<2.5||ssc<2.5)
{
cout<<"THE APPLICANT IS  UNAPPLICABLE  IN CHITTAGONG UNIVERSITY.\n \n";
seecu();
}
if(r>=6.0&&hsc>=2.5)
if(ssc>=2.5)
{
cout<<"HE IS APPLICABLE IN CHITTAGONG UNIVERSITY.\n \n";
}
}
void grade::provezu(void)
{
  if(hsc<2.5||p<1.0||c<1.0||m<1.0||e<1.0||b<1.0)
  {
  cout<<"HE IS UNAPPLICABLE IN ZAHANGIRNAAR UNIVERSITY.\n \n";
  seezu();
  }
  else
  {
  cout<<"HE IS APPLICABLE IN ZAHANGIRNAGAR UNIVERSITY.\n \n";
   }
}
int main()
{

  admission a;
  grade p;
  char name[30];
  float l,b,c,d,e,u,v,k;
  //textcolor(11);
  while(1)
  {
  
  //textcolor(10);
cout<<"ENTER THE NAME  OF THE UNIVERSITY TO GIVE ADMISSION:(In small letter.)=";
cin>>name;
if(strcmp(name,"dhaka")!=0)
if(strcmp(name,"buet")!=0)
if(strcmp(name,"kuet")!=0)
if(strcmp(name,"cuet")!=0)
if(strcmp(name,"ruet")!=0)
if(strcmp(name,"rajshahi")!=0)
if(strcmp(name,"zahangirnagar")!=0)
if(strcmp(name,"sahajalal")!=0)
if(strcmp(name,"khulna")!=0)
if(strcmp(name,"chittagong")!=0)
{
  //textcolor(13);
  cout<<"\nHAVE YOU FOROT THE ABREVIATION.\n \n";
  cout<<"Do you want to see the abreviation.\n \n";
  char d;
  cout<<"IF YOU WISH . ENTER YOUR CHOICE. ( y / n):=";
  cin>>d;
   if(d=='y')
   {
   cout<<"FOR BUET := buet.\n"<<"FOR KUET:=kuet.\n"
   <<"FOR CUET := cuet.\n"<<"FOR RUET:= ruet.\n";
    cout<<"FOR DHAKA UNIVERSITY := dhaka.\n"
    <<"FOR RAJSHAHI UNIVRSITY:=rajshahi.\n"
    <<"FOR KHULNA UNIVERSITY:= khulna.\n"<<"FOR CHITTAGONG UNIVERSITY:= chittagong.\n";
    cout<<"FOR SAHAJALAL SCIENCE & ENGINEERING UNIVERSITY:= sahajalal.\n";
    cout<<"FOR   ZAHANGINAGAR UNIVERSITY := zahangirnagar \n \n";
    }
  cout<<"RE ENTER THE CORRECT NAME  OF THE UNIVERSITY.";
  cin>>name;
  {
  if(strcmp(name,"dhaka")!=0)
if(strcmp(name,"buet")!=0)
if(strcmp(name,"kuet")!=0)
if(strcmp(name,"cuet")!=0)
if(strcmp(name,"ruet")!=0)
if(strcmp(name,"rajshahi")!=0)
if(strcmp(name,"zahangirnagar")!=0)
if(strcmp(name,"sahajalal")!=0)
if(strcmp(name,"khulna")!=0)
if(strcmp(name,"chittagong")!=0)
 {
 cout<<"WRONG NAME ENTERED & ERROR OCCURED.\n \n";
 cout<<"GOOD BYE.\n \n";
 break;
 }
}
  }
 
 cout<<endl<<endl;
  if(!strcmp(name,"buet"))
     {
     p.setkb();
      
     p.proveb();
     }
    else if(!strcmp(name,"kuet"))
         {
         p.setkb();
          
         p.provek();

            }
    else if(!strcmp(name,"cuet"))
         {
         p.setgrade();
          
         p.provec();

          }
    else if(!strcmp(name,"ruet"))
          {
          p.setkb();
           
          p.prover();
          }
    else if(!strcmp(name,"chittagong"))
             {
             p.setgrade();
              
             p.provecu();
              }
    else if(!strcmp(name,"khulna"))
              {
              p.setgrade();
              
             p.proveku();
                }
    else if(!strcmp(name,"dhaka"))
             {
             p.setgrade();
              
              p.provedu();
              }
    else if(!strcmp(name,"rajshahi"))
             {
             p.setgrade();
              
             p.proveru();
             }
    else if(!strcmp(name,"sahajalal"))
             {
             p.setgrade();
              
              p.provesu();
              }
       else if(!strcmp(name,"zahangirnagar"))
             {
             p.setgrade();
              
             p.provezu();
             }

cout<<"Do you Want to exit ? (y/n)"<<endl;
 char w;
 cin>>w;
 if(w=='y')
 {
 cout<<"GOOD BYE.\n \n";
 cout<<"THANKS FOR USING ME.\n \n";
 break;
 }
 else
 {
 continue;
 }
 }
 getch();
 return 0;
 }


