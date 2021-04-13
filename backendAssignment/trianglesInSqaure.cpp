#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "n:"
         << "\t";
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        n = n - pow(floor(sqrt(n)), 2);
        count++;
    }
    (count > 0) ? cout << "count=" << count : cout << -1;
    return 0;
}

// WITH Steps:

// int main()
// {
//     int n;
//     cout << "n:"
//          << "\t";
//     cin >> n;
//     int count = 0;
//     while (n > 0)
//     {
//         n = n - pow(floor(sqrt(n)), 2);
//         cout << "n = " << n << "\n";
//         count++;
//     }
//     (count > 0) ? cout << "count=" << count : cout << -1;
//     return 0;
// }