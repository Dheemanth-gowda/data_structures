#include <iostream>
#include <cmath>
using namespace std;


//APPLY KADANE's ALGORITHM
int maxSum(int arr[], int n)
{
	int res = arr[0];

	int maxEnding = arr[0];

	for(int i = 1; i < n; i++)
	{
		maxEnding = max(maxEnding + arr[i], arr[i]);

		res = max(maxEnding, res);
	}
	
	return res;
}



int main() {
	
     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}, n = 9;

     cout<<maxSum(arr, n);
    
}