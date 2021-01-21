//Remove Duplicate elements in the array

#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> arr)
{
    int res = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    int n = arr.size();
    if (arr[n - 1] == arr[n - 2])
        arr[n - 1] = -1;
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
    arr = removeDuplicates(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}