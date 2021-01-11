#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the number" << endl;
    cin >> n;
    cout << n << endl;
    int rev = 0;
    int temp = n;
    if (n < 10)
    {
        cout << "Yes palidrome" << endl;
        return 0;
    }
    while (temp > 0)
    {
        int key = temp % 10;
        rev = rev * 10 + key;
        temp /= 10;
    }
    cout << rev << endl;
    if (n == rev)
    {
        cout << "Yes palindrome" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}