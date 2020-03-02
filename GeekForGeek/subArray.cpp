// C++ implemenattion of the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if mid can
// be maximum sub - arrays sum
bool check(int mid, int array[], int n, int K)
{
	int count = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {

		// If individual element is greater
		// maximum possible sum
		if (array[i] > mid)
			return false;

		// Increase sum of current sub - array
		sum += array[i];
    cout<<"**sum** check: " <<sum<<endl;
		// If the sum is greater than
		// mid increase count
		if (sum > mid) {
			count++;
			sum = array[i];
			cout<<"%% count @one@: "<<count<<endl;
			cout<<"*sum no sum *: "<<sum<<endl;
		}

	}
	count++;
   cout<<"## count @two@: "<<count<<endl;
	// Check condition
	if (count <= K)
		return true;
	return false;
}

// Function to find maximum subarray sum
// which is minimum
int solve(int array[], int n, int K)
{
	int start = 1;
	int end = 0;

	for (int i = 0; i < n; i++) {
		end += array[i];
	}
    cout<<"inside solve function: "<<end<<endl;
	// Answer stores possible
	// maximum sub array sum
	int answer = 0;
	while (start <= end) {
		int mid = (start + end) / 2;
        cout<<"****mid *** "<<mid<<endl;
		// If mid is possible solution
		// Put answer = mid;
		if (check(mid, array, n, K)) {
			answer = mid;
			cout<<"answer inside while loop: "<<answer<<endl;
			end = mid - 1;
			cout<<"|End| "<<end<<endl;
		}
		else {
			start = mid + 1;
			cout<<"|Start| "<<start<<endl;
		}
	}

	return answer;
}

// Driver Code
int main()
{
	int array[] = { 1, 2, 3, 4 };
	int n = sizeof(array) / sizeof(array[0]);
	int K = 3;
	cout << solve(array, n, K);
}
