#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
    }
};

int nthNodeFromLast()


void printListNodes(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout<<"\n";
}


int main()
{
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    Node *tail = second;

    head = new Node(3);
    first = new Node(2);
    second = new Node(1);

    head->next = first;
    first->next = second;
    second->next = NULL;

    printListNodes(head);

    cout<<"Enter the position"<<endl;
    int place;
    cin>>place;
    cout<<"Value of"<<place<<"th Node from last is:"<<nthNodeFromLast(int value);

    
}