//Write a program to move all zero elements to the end of the array and also preserve the order of non-zero elements.
#include <bits/stdc++.h>
using namespace std;

vector<int> MoveZeroToEnd(vector<int> arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    return arr;
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
    arr = MoveZeroToEnd(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}