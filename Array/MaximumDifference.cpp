
#include <bits/stdc++.h>
using namespace std;

int MaximumElementsBothSide(vector<int> arr)
{
    int maxNum = arr[0];
    int minNum = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }
    return abs(maxNum - minNum);
}

// ! In this the difference is calculated in both direction

int MaximumElement(vector<int> arr)
{
    int n = arr.size();
    int minNum = arr[0];
    int res = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, (arr[i] - minNum));
        minNum = min(minNum, arr[i]);
        // res = max((arr[i] - arr[i - 1]), res);
    }
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
    cout << MaximumElementsBothSide(arr) << endl;
    cout << "OUTPUT:" << MaximumElement(arr) << endl;
}
