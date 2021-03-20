#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> res;
    int i,j=0;

    int index=0;

    string s = "this is the string";
    string t = "is";

    int m = s.length();
    int n = t.length();

    for(int i;i<m;i++)
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
            
        }
        if(j==n)
        {
            res.push_back(i);   
            index = i+1; 
        }

    }

}