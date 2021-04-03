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

void printListNodes(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

void insertAtEnd(int data, Node *head)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = head->next;
        }
        Node *newNode = new Node(data);
        newNode->next = NULL;
        current->next = newNode;
    }
}


int pop(Node * head)
{
//**:Implement remove at the end operation in linked List.

//!! Underflow condition:
    if(head== NULL)
    {
        cout<<"UnderFlow Condition";
        return -1;
    }

    Node * current = head->next;
    Node * prev = head;
    while(current->next!=NULL)
        {
            current = current->next;
            prev = prev->next;
        }
        int temp = current->val;
        prev->next = NULL;
        free(current);
        return temp;
}

int main()
{
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;

    head = new Node(3);
    first = new Node(2);
    second = new Node(1);

    head->next = first;
    first->next = second;

    printListNodes(head);
    pop(head);
    printListNodes(head);
}