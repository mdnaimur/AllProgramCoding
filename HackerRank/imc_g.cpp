/*
 * C++ program to display the factors of the entered number
 */
#include<iostream>
using namespace std;

int main()
{
    int number, temp = 1;

    cout << "Enter the number to determine its factors : " << endl;
    cin >> number;
    cout << "The factors of " << number << " are : " << endl;
    while (temp <= number)
    {
        if (not(number % temp))
            cout << temp << " ";

        temp++;
    }
    cout << endl;
}
