// #include<bits/stdc++.h>
// using namespace std;

// //  1. You are given 1 string of alphabetical characters. Each character can
// //  occur 1 or more times. Put every third character into an array (3 rd , 6 th , 9 th ,
// //  12 th ,..........). Print the arrays and also the maximum recurring element.
// //  Sample Input 1:
// //  S = “abcbjjfgqaazckuccccpcp”
// //  Sample Output:
// //  [ c, j, g, a, k, c, c]
// //  Maximum recurring character: c

// int main()
// {
//     string s;
//     cin>>s;

//     int i =0;
//     int k=1;
//     while(i<s.length())
//     {
//         if(i%(k*3)==0)
//             cout<<s[i];
//     k++;
//     i++;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int temp[26] = {0};

    cout << "String:\n";
    getline(cin, s);
    cout << "Sample Output\n";
    int n = s.length();
    int i;
    for (i = 0; i < n; i++)
    {
        if ((i + 1) % 3 == 0)
        {
            cout << s[i];
        }
        temp[s[i] - 'a']++;
    }
    printf("\n");

    int max = INT_MIN;
    char res;
    for (i = 0; i < n; i++)
    {
        if (max < temp[s[i] - 'a'])
        {
            max = temp[s[i] - 'a'];
            res = s[i];
        }
    }
    cout << "\nMaximum recurring character "
         << "=" << res << "\n";

    return 0;
}
