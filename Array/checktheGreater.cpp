//Program to find the check the count of all elements arr[i]<=arr[j] where 1<j<=i:

#include <bits/stdc++.h>
using namespace std;

int finddif(vector<int> arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = n; i >= 0; i++)
    {
        //traverse from back:
        if (arr[i] <= arr[i - 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;

    vector<int> arr;
    cout << "Please enter the elements:" << endl;
    int key;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        arr.push_back(key);
    }
    int x = finddif(arr);
    cout << x;
}
