#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "n:"
         << "\t";
    cin >> n;
    string arr[n];
    cout << "Enter the dishes:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n";

    bool temp[26] = {false};
    int j;
    for (j = 0; j < arr[0].length(); j++)
    {
        temp[arr[0][j] - 'a'] = true;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool check[26] = {false};
        for (j = 0; j < arr[i][j]; j++)
        {
            if (temp[arr[i][j] - 'a'])
            {
                check[arr[i][j] - 'a'] = true;
            }
        }
        memcpy(temp, check, 26);
    }
    for (int i = 0; i < 26; i++)
        if (temp[i])
            count++;

    cout << count;
    return 0;
}
