//Program to find the second largest element in the array:

#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr)
{
    int res = -1, largest = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    cout << "Element:" << arr[res] << endl;
    return res;
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
    cout << secondLargest(arr) << endl;
}