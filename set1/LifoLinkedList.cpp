#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int k)
    {
        data = k;
    }
};

Node *temp;
Node *rear = NULL;
Node *front = NULL;

void Insert()
{
    int val;
    cout << "Please enter the value of the element to be inserted:" << endl;
    cin >> val;

    //The empty stack:
    if (rear == NULL)
    {
        Node *temp = new Node(val);
        temp->next = NULL;
        rear = temp;
        front = rear;
    }
    else
    {
        Node *temp = new Node(val);
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    }
}

void Pop()
{
    if (rear == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        temp = front;
        while (temp->next != rear)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        free(rear);
        rear = temp;
    }
}

void Display()
{
    if (rear == NULL)
    {
        cout << "The stack is empty";
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    int ch;

    do
    {
        cout << "==================================================" << endl;
        cout << "1) Insert element to queue" << endl;
        cout << "2) Delete element from queue" << endl;
        cout << "3) Display all the elements of queue" << endl;
        cout << "4) Exit" << endl;
        cout << "==================================================" << endl;
        cout << "Enter your choice : " << endl;
        cout << "==================================================" << endl;
        cout << "Output:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}