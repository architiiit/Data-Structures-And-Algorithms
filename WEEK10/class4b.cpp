//Question 2:Remove duplicates from a sorted Linked List
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
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void removeDuplicates(Node* &head)
{   
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return;
    }
    if(head->next==NULL)
    {
        cout<<"Single node in LL"<<endl;
    }
    //>1 node in LL

    Node* curr=head;
    while(curr!=NULL)
    {
        if((curr->next!=NULL)&&(curr->data==curr->next->data))
        {   
            //equal wala case 
            Node* temp=curr->next;
            curr->next=curr->next->next;

            //delete node
            temp->next=NULL;
            delete temp;
        }
        else {
            //not equal wala case 
            curr=curr->next;
        }
    }
}
int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(2);
    Node* fourth=new Node(3);
    Node* fifth=new Node(4);
    Node* sixth=new Node(4);
    Node* seventh=new Node(5);
    Node* eighth=new Node(5);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;

    cout<<"Input LL:";
    print(head);

    removeDuplicates(head);

    cout<<"Output LL:";
    print(head);
return 0;
}