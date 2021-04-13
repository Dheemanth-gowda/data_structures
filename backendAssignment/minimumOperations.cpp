#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements:"
         << "\t";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to increment:";
    int k;
    cin >> k;

    int maxElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxElement < arr[i])
        {
            maxElement = arr[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (((maxElement - arr[i])) % k != 0)
        {
            cout << -1;
            return 0;
        }

        else
        {
            count += (maxElement - arr[i]) / k;
        }
    }
    cout << count;
    return 0;
}
