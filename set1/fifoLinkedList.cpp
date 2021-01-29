// ! FIFO means First In First Out -> Queue is an example for the same

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

Node *front = NULL;
Node *rear = NULL;
Node *temp;

void Insert()
{
    int data;
    cout << "Insert the element in queue : " << endl;
    cin >> data;
    if (rear == NULL)
    {
        Node *rear = new Node(data);
        rear->next = NULL;
        rear->data = data;
        front = rear;
    }
    else
    {
        Node *temp = new Node(data);
        rear->next = temp;
        temp->data = data;
        temp->next = NULL;
        rear = temp;
    }
}
void Delete()
{
    temp = front;
    if (front == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }
    else if (temp->next != NULL)
    {
        temp = temp->next;
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);
        front = temp;
    }
    else
    {
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);
        front = NULL;
        rear = NULL;
    }
}
void Display()
{
    temp = front;
    if ((front == NULL) && (rear == NULL))
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void TopNode(Node *root)
{
    if (front == NULL)
    {
        cout << "The Queue is Empty";
    }
    else
    {
        cout << "The top element is:" << endl;
        cout << front->data << endl;
    }
}

int main()
{
    Node *newNode = new Node(10);
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
            Delete();
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