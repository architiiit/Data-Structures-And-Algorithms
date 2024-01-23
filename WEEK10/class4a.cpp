//CLASS 4
//Question 1->check whether Linked List is palindrome or not 
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Deleting node with data "<<data<<endl;
    }
};

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}

bool checkPallindrome(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return true;
    }
    if(head->next==NULL)
    {
        //only one node
        return true;
    }

    // >1 node in LL

    //Step A:find the middle node
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    //slow pointer is now pointing to middle node
    

    //stepB:reverse LL after middle/slow node
    Node* reverseLLKaHead=reverse(slow->next);

    //join the reversed linked list into the left part
    slow->next=reverseLLKaHead;

    //Start comparison
    Node* temp1=head;
    Node* temp2=reverseLLKaHead;

    while(temp2!=NULL)
    {
        if(temp1->data !=temp2->data)
        {
            //not a pallindrome
            return false;
        }
        else
        {
            //if data is equal,then aage badh jao
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;


};
int main()
{
    // Node* head=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);
    // Node* fourth=new Node(30);
    // Node* fifth=new Node(20);
    // Node* sixth=new Node(10);

    // head->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // fifth->next=sixth;
    Node* head=new Node(1);
    Node* second=new Node(1);
    Node* third=new Node(2);
    Node* fourth=new Node(1);
    head->next=second;
    second->next=third;
    third->next=fourth;
    
    bool ispallindrome=checkPallindrome(head);
    if(ispallindrome)
    {
        cout<<"LL is a valid pallindrome"<<endl;
    }
    else
    {
        cout<<"LL is not a valid pallindrome"<<endl;
    }
    
return 0;
}
