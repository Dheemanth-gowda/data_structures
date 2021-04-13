#include <bits/stdc++.h>
using namespace std;

class stackImplemetation
{
public:
    int *arr;
    int cap;
    int top = -1;
    stackImplemetation(int size)
    {
        cap = size;
        arr = new int[cap];
        top = -1;
    }

    void pushElement(int data)
    {
        //** Check overflow:
        if (top == (cap - 1))
        {
            cout << "Under flow condtion";
            return;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    int popElement()
    {
        //** Check underflow.
        if (top == -1)
        {
            cout << "Underflow condition";
            return INT_MIN;
        }
        else
        {
            int res = arr[top];
            top--;
            return res;
        }
    }

    int peek()
    {
        return arr[top];
    }

    int stackSize()
    {
        return (top + 1);
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    stackImplemetation s(5);
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