#include <bits/stdc++.h>
using namespace std;
#include "functionalities.cpp"

int main()
{
    int choice = 1;
    vector<int> statusArray;
    while (choice < 5 && choice > 0)
    {
        cout << "\n Make a choice: \n ====== Admin ====== \n 1. SET STATUS \n 2. RESTART SERVER \n ====== UserMessage ====== \n 3.Send Message \n 4.Display Messages \n ====== EXIT ====== \n 5.EXIT \n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Setting status : Please enter the status if each ISP ie: \n (1) -> Working state (0)->Not working state :\n 1. AIRTEL \t 2.JIO \t 3.IDEA \n";
            cout << "\nENTER THE VALUE:\n";
            for (int i = 0; i < 3; i++)
            {
                cin >> statusArray[i];
            }
            // setStatus(statusArray);
            break;
        case 2:
            cout << "jbhdbcihdb==" << choice;
            break;
        case 3:
            cout << "jbhdbcihdb==" << choice;
            break;
        case 4:
            cout << "jbhdbcihdb==" << choice;
            break;
        default:
            cout << "Exiting" << choice;
            break;
        }
    }
    //Main goes here:
    return 0;
}
