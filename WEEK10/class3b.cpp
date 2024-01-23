//QUESTION 2:reverse Linked List in k groups
//Linked List class 3
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
int getLength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
Node* reverseKNodes(Node* &head,int k)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len=getLength(head);
    if(k>len)
    {
        // cout<<"Enter valid value of k "<<endl;
        return head;
    }
    //It means number of nodes in Linked List is >=k
    //step A:reverse first k nodes of linked list
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;

    int count=0;
    while(count<k)
    {   forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    //Step B:recursive call
    if(forward!=NULL){
        //we still have nodes left to reverse
        Node* recursionKaAns=reverseKNodes(forward,k);
        head->next=recursionKaAns;
    }
    //step C:return head of modified list
    return prev;
}
int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;


    print(head);

    //Reverse k nodes
    head=reverseKNodes(head,3);
    print(head);    


return 0;
}