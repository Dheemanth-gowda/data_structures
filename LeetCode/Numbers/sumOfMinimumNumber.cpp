//Sum of Digits in the Minimum Number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {54, 251, 478, 523, 7822, 256};
    int minNum = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }
    cout << (floor(log10(minNum) + 1)) << endl;
    int sum = 0;
    while (minNum > 0)
    {
        sum += minNum % 10;
        minNum = minNum / 10;
    }
    cout<<sum;
}