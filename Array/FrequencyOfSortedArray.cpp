//Find the Frequency of Each of the elements in the Sorted Array:

#include <bits/stdc++.h>
using namespace std;

void FrequencyOfElements(vector<int> arr)
{
    int freq = 1;
    int i = 1;
    int n = arr.size();
    while (i < n)
    {

        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << "\t" << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1)
    {
        cout << arr[0] << "1" << endl;
    }
    if (arr[n - 2] != arr[n - 1])
    {
        cout << arr[n - 1] << "\t" << 1 << endl;
    }
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
    FrequencyOfElements(arr);
}
