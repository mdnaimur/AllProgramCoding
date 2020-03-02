#include<iostream>
#include<cmath>

using namespace std;

int main(){
float base = 5.0;
float power = 2.0;
float square = pow(base,power);
float squareroot = sqrt(square);

cout << base << " to the " <<  power << " power is: " << square << endl;
cout << "the square root of " << square << " is " << squareroot << endl;

}
