#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array:" << endl;
    cin >> n;
    cout << "Elements:" << endl;
    vector<int> arr;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }
    int key;
    cout << "Enter the key" << endl;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found in index:" << i << endl;
            return 0;
        }
        else
        {
            cout << "Element not found";
        }
    }
    return 0;
}