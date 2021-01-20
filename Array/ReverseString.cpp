//Write a program to reverse an array or string

#include <bits/stdc++.h>
using namespace std;

void constructorMethod(string str)
{

    //Use of reverse iterators
    string rev = string(str.rbegin(), str.rend());
    cout << rev << endl;
}

void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
    cout << endl;
}

void reverseStr(string &str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    cout << str << endl;
}

int main()
{
    string str;
    cout << "Please enter the string:" << endl;
    getline(cin, str); //Function considers a new line or (‘\n’) character as the delimitation character and new line character is valid input for this function

    cout << "Using the constructor method:" << endl;
    constructorMethod(str);

    cout << "Using the print reverse method:" << endl;
    reverse(str);

    cout << "Using the swap individual character reverse method:" << endl;
    reverseStr(str);

    string rev = "hello";
    cout << "Using the inbuilt reverse method:" << endl;
    reverse(rev.begin(), rev.end());
    cout << rev << endl;
}