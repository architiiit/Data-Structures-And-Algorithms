//circular linkeed list
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
void insertAtHead(Node* &tail, int data)
{
    // check for empty linlked list
    if (tail == NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = tail;
        return;
    }
    // passed by reference because we want to change the linked list at original location and we dont have to return anything
    // step1
    Node* newNode = new Node(data);
    // step2
    newNode->next = tail->next;
    // step3
    tail->next = newNode;
}

// i want to insert node at the tail of the LL
void insertAtTail( Node* &tail, int data)
{ // check for empty linked list
    if (tail == NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = tail;
        return;
    }
    // step1:Create a node
    Node* newNode = new Node(data);
    // step2:Connect with tail node
    newNode->next = tail->next;
    // step3:Update the tail
    tail->next = newNode;
    // step4:Update the tail pointer
    tail = newNode;
}
int findLength(Node* &tail)
{
    int len = 0;
    Node* temp = tail->next;
    while (temp != tail)
    {
        temp = temp->next;
        len++;
    }
    // cout<<len<<endl;
    return len+1;
}
void insertAtPosition(int data,int afterData,Node* &tail)
{
     if (tail == NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = tail;
        return;
    }
    int len=findLength(tail);
    int i = 1;
    Node* temp = tail->next;
    while (i < len)
    {
        if (temp->data == afterData)
        {
            break;
        }
        temp = temp->next;
        i++;
    }
    if (i == len)
    {
        cout << "data not found" << endl;
        return;
    }   
    Node* newNode = new Node(data); 
    newNode->next = temp->next;
    temp->next = newNode;
}
void print(Node *tail)
{
    Node* temp = tail->next;
    while (temp != tail)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << "->";
}

void deleteNode(int position,Node *&tail)
{
    if (tail == NULL)
    {
        cout << "cannot delete,LL is empty" << endl;
        return;
    }
    // deleting first node
    if (position == 1)
    {
        Node* temp = tail->next;
        tail->next = temp->next;
        delete (temp);
        return;
    }
    // deleting last node
    int len = findLength(tail);
    if (position == len)
    {
        Node* temp = tail->next;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = tail->next;
        tail->next = NULL;
        delete (tail);
        tail = temp;
        return; 
    }

    // deleting middle node

    // step1:find prev and curr
    int i = 1;
    Node* prev =tail;
    while (i <= position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    // step2:connect prev and curr->next
    prev->next = curr->next;
    // step3:connect curr with NULL
    curr->next = NULL;
    // step3:delete curr
    delete (curr);

}
int main()
{
    // Node* head=new Node(10);
    Node* tail = NULL;
    insertAtHead(tail, 20);
    insertAtHead(tail, 50);
    insertAtHead(tail, 60);
    insertAtHead(tail, 90);

    insertAtTail(tail, 77);
    insertAtTail(tail, 89);

    print(tail);
    cout << endl;

    // deleteNode(6, tail);
    insertAtPosition(101, 50, tail);

    print(tail);
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

    return 0;
}