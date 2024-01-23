//Question:Reverse a linked list


// Insertion and Deletion of singly linked list
#include <iostream>
using namespace std;

// creating A Node
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // write a destructor to delete a node
    ~Node()
    {
        cout << "Deleting node with data " << data << endl;
        // if (next != NULL)
        // {
        //     delete next;
        // }
    }
};
// I want to insert a node at the head of the LL
void insertAtHead(Node* &head, Node* &tail, int data)
{
    // check for empty linlked list
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // passed by reference because we want to change the linked list at original location and we dont have to return anything
    // step1
    Node* newNode = new Node(data);
    // step2
    newNode->next = head;
    // step3
    head = newNode;
}

// i want to insert node at the tail of the LL
void insertAtTail(Node* &head, Node* &tail, int data)
{ // check for empty linked list
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1:Create a node
    Node* newNode = new Node(data);
    // step2:Connect with tail node
    tail->next = newNode;
    // step3:Update the tail
    tail = newNode;
}
int findLength(Node* &head)
{
    int len = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    // cout<<len<<endl;
    return len;
}
void insertAtPosition(int data, int position, Node* &head, Node* &tail)
{
    if (head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1:find the position:prev&curr;
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // cout<<"calculating length "<<endl;

    int len = findLength(head);
    // cout<<len<<endl;
    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node* prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    // step2:Create a node
    Node* newNode = new Node(data);
    // step3:Connect with prev and curr
    newNode->next = curr;
    // step4:Connect with prev
    prev->next = newNode;
}
void print(Node *head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "cannot delete,LL is empty" << endl;
        return;
    }
    // deleting first node
    if (position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete (temp);
        return;
    }
    // deleting last node
    int len = findLength(head);
    if (position == len)
    {
        // find previous
        int i = 1;
        Node* prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        // step2:
        prev->next = NULL;
        // step3:
        Node* temp = tail;
        // step4:
        tail = prev;
        // step5:
        delete (temp);
        return;
    }

    // deleting middle node

    // step1:find prev and curr
    int i = 1;
    Node* prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    // step2:
    prev->next = curr->next;
    // step3:
    curr->next = NULL;
    // delete curr
    delete curr;
}
Node* reverse(Node* &prev,Node* &curr)
{
    if(curr==NULL)
    {//LL is reversed
        return prev;
    }

    //1 case solve then revcursion will handle
    Node* forward=curr->next;
    curr->next=prev;

   return reverse(curr,forward);

}
Node* reverseusingLoop(Node* head)
{
    Node*prev=NULL;
    Node*curr=head;

    while(curr!=NULL)
    {
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
Node* reverseusingRecursion(Node* prev,Node* curr)
{
    //base case
    if(curr==NULL)
    {
        return prev;
    }

    //1 case solve krna hai
    Node* forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;

    //recursion sambhal lega
   return reverseusingRecursion(prev,curr);
}
int main()
{
    // Node* head=new Node(10);
    Node* head = NULL; // incase if head is null
    Node* tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);

    insertAtTail(head, tail, 77);

    print(head);
    cout << endl;

    // cout << "head: " << head->data << endl;
    // cout << "tail: " << tail->data << endl;

    // insertAtPosition(101, 5, head, tail);

    // cout << "Printing after inserting at position call " << endl;
    // print(head);
    // cout << endl;

    // cout << "head: " << head->data << endl;
    // cout << "tail: " << tail->data << endl;

    // deleteNode(4,head,tail);
    // cout<<endl;
    // print(head);

    Node* prev=NULL;
    Node* curr=head;
    // head=reverse(prev,curr);
    head=reverseusingLoop(head);
    // head=reverseusingRecursion(prev,curr);

    cout<<endl;
    print(head);
    cout<<endl;
    return 0;
}