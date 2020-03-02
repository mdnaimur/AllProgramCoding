// C++ program to concatenate given string
// n number of times
#include <bits/stdc++.h>
#include <string>
using namespace std;

// Function which return string by concatenating it.
string repeat(string s, int n)
{
	// Copying given string to temparory string.
	string s1 = s;

	for (int i=1; i<n;i++)
		s += s1; // Concatinating strings

	return s;
}

// Driver code
int main()
{
	string s ;
	int n ;
  cin>>s>>n;

	cout << repeat(s, n) << endl;;
	return 0;
}
