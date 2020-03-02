#include<iostream>
using namespace std;

int main()
{
    int n;
    double result,num1, num2;
    char d;
 do{
     cout<<"Press :\n 1: For Addition \n 2: For Subtraction\n 3: For Multiplication \n 4: For Division\n"<<endl;
     cout<<"Enter the number : ";
     cin>>n;
     cout<<"Enter The First Value  : ";
     cin>>num1;
     cout<<"Enter The Second Value : ";
     cin>>num2;
     cout<<endl<<endl;
     switch(n)
     {
         case 1: result=num1+num2;
               cout<<"Addition Result is : "<<result;
               break;
         case 2: result=num1-num2;
                cout<<"Subtraction Result is : "<<result;
                break;
         case 3: result=num1*num2;
                cout<<"Multiplication Result is : "<<result;
                break;
         case 4: result=num1/num2;
                 cout<<"Division Result is : "<<result;
                 break;
        default:cout<<"Wrong input ";

     }
     cout<<endl<<endl;
     cout<<"Do you Continue : Y/N? : ";
     cin>>d;
     cout<<endl;
}
while(d=='Y');


     return 0;

}
