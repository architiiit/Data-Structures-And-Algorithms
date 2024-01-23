//Question:sort 0s,1s,2s in a linked list

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
void sortZeroOneTwo(Node* &head)
{ 
    // step1:find count of zroes ones and twos 
    int zero=0;
    int one=0;
    int two=0;

    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            zero++;
        }
        else if(temp->data==1)
        {
            one++;
        }
        else if(temp->data==2)
        {
            two++;
        }
        temp=temp->next;
    }
    //step2:fill 0,1,2 in the original LL

    temp=head;
        //fill zeroes
        while(zero--)
        {
            temp->data=0;
            temp=temp->next;
        }

        //fill ones 
        while(one--)
        {
            temp->data=1;
            temp=temp->next;
        }
        //fill twos
        while(two--)
        {
            temp->data=2;
            temp=temp->next;
        }
    
}
Node* sort2(Node* &head)
{   if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    if(head->next==NULL)
    {
        //single node in LL
        return head;
    }
    //if more than one node

    //create dummy nodes
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;

    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;

    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    //traverse the original LL
    Node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data==0)
        {   //take out the zero wali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            //append the zero node in zeroHead LL
            zeroTail->next=temp;
            zeroTail=temp;
        }
        else if(curr->data==1)
        {
            //take out the one wali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            //append the one node in oneHead LL
            oneTail->next=temp;
            oneTail=temp;
        }
        else if(curr->data==2)
        {
            //take out the two wali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            //append the two node in twoHead LL
            twoTail->next=temp;
            twoTail=temp;
        }
    }
    //ab yaha pr,zero,one,two teeno LL ready hai

    //join them
    //remove dummy node

    //modify one wali list
    Node* temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;

    //modify two wali list
    temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;

    //join list
    if(oneHead!=NULL)
    {
        //one wali list is not empty
        //zero wali list ko one wali list se attach kr diya
        zeroTail->next=oneHead;
        //gar two wali list exist krti hai to one wali ko two se connect kato
        if(twoHead!=NULL)
        {
            oneTail->next=twoHead;
        }
    }
    else{
        //one wali list is empty
        //agar two wali exist krti hai to direct zero wali ko two wali se attach kr do
        if(twoHead!=NULL)
        {
            zeroTail->next=twoHead;
        }
    }

    //remove zeroHead dummy node
    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;

    //return head of the modified linked list
    return zeroHead;
}
int main()
{
    Node* head=new Node(2);
    Node* second=new Node(2);
    Node* third=new Node(2);
    Node* fourth=new Node(1);
    Node* fifth=new Node(2);
    Node* sixth=new Node(2);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    cout<<"Input LL: ";
    print(head);

    // sortZeroOneTwo(head);
    head=sort2(head);
    cout<<"Output LL: ";
    print(head);
return 0;
}