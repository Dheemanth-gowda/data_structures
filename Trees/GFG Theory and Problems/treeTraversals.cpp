#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};

void InOrder(Node *root);
void PostOrder(Node *root);
void PreOrder(Node *root);

int main()
{
    Node *root = new Node(10);         //            10                                          10
    root->left = new Node(5);          //        5                                          5           20
    root->right = new Node(20);        //                   20                           3      6   15       30
    root->right->right = new Node(30); //                        30
    root->right->left = new Node(15);  //                15
    root->left->left = new Node(3);    //  3
    root->left->right = new Node(6);   //        6
    int choice = 25;                   // Random number to make the loop run
    while (choice)
    {
        cout << "========================================================================================================================================\n";
        cout << "Please enter the choice 1-3:\n \t 1. InOrder Traversal \n \t 2. PostOrder Traversal \n \t 3. PreOrder Traversal \n \t 0: Exit" << endl;
        cin >> choice;
        cout << "========================================================================================================================================\n";
        switch (choice)
        {
        case 1:
            InOrder(root);
            cout << "\n";
            break;

        case 2:
            PostOrder(root);
            cout << "\n";
            break;

        case 3:
            PreOrder(root);
            cout << "\n";
            break;

        default:
            cout << "Exiting......" << endl;
            cout << "\n";
            break;
        }
    }
}

void InOrder(Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}

void PostOrder(Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        InOrder(root->right);
        cout << root->data << " ";
    }
}

void PreOrder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        InOrder(root->left);
        InOrder(root->right);
    }
}