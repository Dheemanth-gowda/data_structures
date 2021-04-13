// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int data)
//     {
//         val = data;
//     }
// };

// void printListNodes(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout<<"\n";
// }

// void insertAtEnd(int data, Node **head_ref,Node **tail)
// {
//     cout<<"Here";
//     Node* new_node = new Node(data);
  
//     Node *last = *head_ref; 
  
//     new_node->next = NULL; 
  
//     if (*head_ref == NULL) 
//     { 
//         *head_ref = new_node; 
//         return; 
//     }  
//     while (last->next != NULL) 
//         last = last->next; 
//     last->next = new_node; 
//     *tail = new_node;
//     return;
// }


// int pop(Node * head,Node *tail)
// {
// //**:Implement remove at the end operation in linked List.

// //!! Underflow condition:
//     if(head== NULL)
//     {
//         cout<<"UnderFlow Condition";
//         return -1;
//     }

//     Node * current = head->next;
//     Node * prev = head;
//     while(current->next!=NULL)
//         {
//             current = current->next;
//             prev = prev->next;
//         }
//         int temp = current->val;
//         prev->next = NULL;
//         tail = prev;
//         free(current);
//         return temp;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *first = NULL;
//     Node *second = NULL;
//     Node *tail = second;

//     head = new Node(3);
//     first = new Node(2);
//     second = new Node(1);

//     head->next = first;
//     first->next = second;
//     second->next = NULL;

//     printListNodes(head);

//     while(1)
//     {
//         cout<<"Please enter a valid choice :\n 
//         1). Insert into stack \n 
//         2).Pop value from stack \n 
//         4).Print List 5).Exit\n";
//         int choice;
//         cin>>choice;

//         switch(choice)
//         {
//             case 1: 
//                 cout<<"Please enter the value to enter the stack:\n";
//                 int value;
//                 cin>>value;
//                 insertAtEnd(value,&head,&tail);
//                 break;
//             case 2: 
//                 cout<<"Value popped is:"<<pop(head,tail)<<endl;
//                 break;
//             case 3: 
//                 cout<<"Top most element is:"<<tail->val<<endl;
//                 break;
//             case 4: 
//                 cout<<"List:\n";
//                 printListNodes(head);
//                 break;
//             default:
//                 return 0;
//         }
//     }
// return 0;
// }