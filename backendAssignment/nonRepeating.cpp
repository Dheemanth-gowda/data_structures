// 2. You are given a sorted array of integers. Each element in the array occurs
// 2 times expect one element. Find the element that occurs just once in the
// array in just O(logN) time and O(1) extra space.
// Sample Input 1:
// Array = 1,1,2,2,3,4,4
// Output Input 1:
// 3

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter the size of the array:"
         << "\n";
    int n;
    cin >> n;
    cout << "Enter the aay elements" << endl;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (a[0] != a[1])
    {
        cout << a[0] << " ";
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] != a[i - 1] && a[i] != a[i + 1])
        {
            cout << "Element is:" << a[i] << endl;
            break; 
        }
    }

    if (a[n - 2] != a[n - 1])
    {
        cout << "Element is:" << a[n - 1] << endl;
    }

    return 0;
}