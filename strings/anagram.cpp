#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        const int CHAR=256;
        //create a count array and increment and decrement count of index 
        if(s.length() != t.length())
        {
            return false;
        }
        
         int count[CHAR]={0};
        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int j =0;j<CHAR;j++){
            if(count[j]!=0){
                return false;
            }
        }
        return true;
    }
};


int main()
{
    Solution s;
    cout<<s.isAnagram("hello","lloeh");
   return 0;
}