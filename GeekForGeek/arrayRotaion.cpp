/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void leftRotated(vector<int> ar,int n)
{
    int temp=ar[0],i;
    cout<<" Position of "<<temp<<" ->"<<ar[0];
    for(i=0;i<n-1;i++)
     ar[i]=ar[i+1];
     ar[i]=temp;

     cout<<"\nInside void leftRote "<<ar[i];
}
void Rotated(vector<int> an,int k,int n)
{
    for(int i=0;i<k;i++)
        leftRotated(an,n);
}
void Print(vector<int> arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr;
    int n,d;
    int k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>> k;
        arr.push_back(k);
    }

    cout<<"How many number u want to rotate :";
    cin>>d;
    Rotated(arr,d,n);
    Print(arr,n);

    return 0;
}

*/


// C++ program to rotate an array by
// d elements
#include <bits/stdc++.h>
using namespace std;

/*Function to left Rotate arr[] of
size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];

	arr[i] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main()
{

	int d,n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"How many number u want to rotate :";
    cin>>d;
	// Function calling
	leftRotate(arr, d, n);
	printArray(arr, n);

	return 0;
}
