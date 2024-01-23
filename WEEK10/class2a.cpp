// DOUBLY LINKED LIST
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node() 
        {
            //write your code here
            cout << "Node with value: " << this->data << "deleted" << endl;
        }
};
void print(Node *&head) // O(n)-TC O(1)->SC
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int getLength(Node *head) // O(n)-TC O(1)->SC
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is non empty
        // step1:Create node
        Node *newNode = new Node(data);
        // step2:
        newNode->next = head;
        // Step3:
        head->prev = newNode;
        // step4:
        head = newNode;
    }
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is non empty
        // step1:Create node
        Node *newNode = new Node(data);
        // step2:
        tail->next = newNode;
        // Step3:
        newNode->prev = tail;
        // step4:
        tail = newNode;
    }
}
void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    // if LL empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        if (position == 1)
        {
            insertAtHead(head, tail, data);
            return;
        }
        int len = getLength(head);
        if (position > len)
        {
            insertAtTail(head, tail, data);
            return;
        }
        // insertion in middle
        // step 1:find prev && curr
        int i = 1;
        Node *prevNode = head;
        while (i < position - 1)
        {
            prevNode = prevNode->next;
            i++;
        }
        Node *curr = prevNode->next;
        // step1;
        Node *newNode = new Node(data);

        // step3:
        prevNode->next = newNode;
        newNode->prev = prevNode;
        curr->prev = newNode;
        newNode->next = curr;
    }
}
void deleteFromPos(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return;
    }
    int len = getLength(head);
    if (position > len)
    {
        cout << "Please enter a valid position: " << endl;
        return;
    }
    if (head->next == NULL)
    {
        // single node
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    if (position == 1)
    {
        // want to delete first node
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    if (position == len)
    {
        // delete last node
        Node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }
    // delte from middle of linked list

    // step 1:find left,curr,right
    int i = 1;
    Node *left = head;
    while (i < position - 1)
    {
        left = left->next;
        i++;
    }
    Node *curr = left->next;
    Node *right = curr->next;

    // step2:
    left->next = right;
    right->prev = left;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    Node *head = first;
    Node *tail = third;

    // print(first);
    // cout << endl;

    insertAtHead(head, tail, 101);
    // print(head);

    insertAtTail(head, tail, 501);

    // cout << endl;
    // print(head);

    insertAtPosition(head, tail, 401, 2);

    cout << endl;
    print(head);

    deleteFromPos(head,tail,7);

    
    print(head);

    return 0;
}