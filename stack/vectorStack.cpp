#include <bits/stdc++.h>
using namespace std;

class stackImplemetation
{
public:
    vector<int> v;
    void pushElement(int data)
    {
        v.push_back(data);
    }

    int popElement()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }

    int peek()
    {
        return v.back();
    }

    int stackSize()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }
};

int main()
{
    stackImplemetation s;
    s.pushElement(10);
    s.pushElement(20);
    s.pushElement(30);
    s.pushElement(40);
    cout << "\n";
    cout << s.peek();
    cout << "\n";
    cout << s.popElement();
    cout << "\n";
    cout << s.peek();
    cout << "\n";
    string isEmpty = (s.isEmpty() == 0) ? "false" : "true";
    cout << isEmpty;
    cout << "\n";
    cout << s.stackSize();
    cout << "\n";
    return 0;
}