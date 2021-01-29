//Binary Search in a array is done in sorted array only.
//If array is unsorted use a sort function to sort it

#include <bits/stdc++.h>
using namespace std;

//* Here since Vector is being used there is no need to pass the low and high as a parameter:

//! There are two ways of doing it  - 1. Recurssive method:

int binarySearchRecurssive(vector<int> arr, int key, int low, int high)
{
    if (high >= low)
    {

        int mid = (low + (high - low)) / 2;

        if (arr[mid] == key)
            return mid + 1;

        if (arr[mid] > key)
        {
            return binarySearchRecurssive(arr, key, low, mid - 1);
        }
        return binarySearchRecurssive(arr, key, mid + 1, high);
    }
    return -1;
}

// //! Second method is the iterative solution:
int binarySearchIterative(vector<int> arr, int key)
{
    int low = 0;
    int high = arr.size();
    while (low <= high)
    {
        int mid = (low + (high - low)) / 2;

        if (arr[mid] == key)
        {
            return mid+1;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

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
    cout << "Enter the element:" << endl;
    cin >> key;
    int high = arr.size();
    // cout << binarySearchRecurssive(arr, key, 0, high) << endl;
    cout << binarySearchIterative(arr, key) << endl;
}
