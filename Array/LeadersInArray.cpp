//Leaders in an Array problem
//An element is called the leader of an array if there is no element greater than it on the right side.
#include <bits/stdc++.h>
using namespace std;

void LeaderElements(vector<int> arr);

int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;

    vector<int> arr;
    cout << "Please enter the elements:" << endl;
    int key;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        arr.push_back(key);
    }
    LeaderElements(arr);
    return 0;
}

//! Method 1: Naive Approch O(N^2) time complexity: We run loop to check if all the elements individually if it is greater than all the other elements.

//! Method 2: More Efficient way of manipulation:
//Here will traverse the array from the end check if all the elements are low before it:
void LeaderElements(vector<int> arr)
{
    int n = arr.size();
    int current = arr[n - 1];
    cout << current << "\t";

    for (int i = n - 2; i >= 0; i--)
    {
        if (current < arr[i])
        {
            current = arr[i];
            cout << current << "\t";
        }
    }
}