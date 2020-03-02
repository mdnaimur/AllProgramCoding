#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main() {
   float percentage;
   int total_marks;
   int scored ;
   float TotalValue;
   cout<<"Total Unit:";
    cin>>total_marks;
   // cout<<"\n Percentage vat :";
   // cin>>scored;

   percentage = (float)(15*total_marks)/100;

   printf("Percentage = %.2f%%", percentage);
   TotalValue = total_marks+percentage;
   cout<<"\n Now value is "<<TotalValue<<endl;

   return 0;
}
