//Count the frequency of each character in input string

#include <bits/stdc++.h>
using namespace std;

void charFrequency(string sample)
{
    int temp[26] = {0};
    int i =0;
    while (sample[i] != '\0')
    {
        temp[sample[i] - 'a']++;
        i++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (temp[i] > 0)
        {
            cout << char(i + 'a') << "\t" << temp[i] << "\n";
        }
    }
}

int main()
{
    string sample = "Hello";
    cout << "string\t"
         << "Count\n";

    charFrequency(sample);
}