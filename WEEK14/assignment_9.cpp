#include<iostream>
using namespace std;



class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* root,int data)
{
    if(root==NULL)
    {
        //this is the first node we have to create
        root=new Node(data);
        return root;
    }
    //not the first node
    if(root->data>data){
        //insert in left
        root->left=insertIntoBST(root->left,data);
    }else{
        //insert into right
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
Node* findNodeInBST(Node* root,int target){
    //base case
    if(root==NULL){
        return NULL;
    }

    if(root->data==target)
    return root;

    if(target>root->data)
    {
        //right subtree me search karo
        return findNodeInBST(root->right,target);
    }
    else{
        //left subtree me search karo
        return findNodeInBST(root->left,target);
    }
}
void takeInput(Node*& root)
{
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

void printLL(Node* head){
    while(head)
    {
        cout<<head->data<<" ";
        head=head->right;
    }
}
void in(Node* root,Node*& prev){
    if(root==NULL)
    return;

    in(root->left,prev);
    prev->left=NULL;
    prev->right=root;
    prev=root;
    // cout<<root->data<<" ";
    in(root->right,prev);
}
Node* flatten(Node* root){

    Node* dummy=new Node(-1);
    Node* prev=dummy;
    in(root,prev);
    prev->left=prev->right=NULL;
    root=dummy->right;
    return root;
}
int main()
{
    Node* root=NULL;
    root=insertIntoBST(root,5);
    insertIntoBST(root,3);
    insertIntoBST(root,2);
    insertIntoBST(root,4);
    insertIntoBST(root,7);
    insertIntoBST(root,6);
    insertIntoBST(root,8);
    root=flatten(root);
    printLL(root);
return 0;
}