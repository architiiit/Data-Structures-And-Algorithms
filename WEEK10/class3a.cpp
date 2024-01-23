//Linked List class 3

//Question-1
//Finding the middle node of linked list->slow-fast algorithm/tortoise algorithm

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
Node* getMiddle(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty "<<endl;
        return head;
    }
    if(head->next==NULL)
    {
        //only one node
        return head;
    }
    //LL have greater than 1 node
    Node* slow=head;
    Node* fast=head;
    // Node* fast=head->next;//simply change this in case of even case to get the either answer as middle

    while(slow!=NULL && fast!=NULL)
    {   
        //fast 2 step aage badhana hai aur slow 2 step
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;//answer is slow 
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
    fifth->next=NULL;


    print(head);

    cout<<"Middle node is: "<<getMiddle(head)->data<<endl;


return 0;
}