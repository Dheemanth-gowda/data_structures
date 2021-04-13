#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void longestValidParentheses(string s) {
    int res=0;
    int count =0;
    int cur =0;
    int i ;
    int n = s.length();    
    for(i =0;i<n;i++)
    {
        if(s[i]=='(')
        {
            if(s[i+1]==')')
            {
                cur++;
                cout<<"cur:"<<cur;
                res = max(cur,res);
                cout<<"res:"<<res;
                i = i+2;
            }
            else
            {
                cur =0;
                i = i+2;
            }
        }
    }
        cout<<"res="<<(2*res);
    }
    cout<<"Hello";
};

int main()
{
    string str = "this is the string";
    Solution s;
    s.longestValidParentheses(str);
    return 0;
}