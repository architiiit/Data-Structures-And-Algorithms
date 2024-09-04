// build binary tree from inorder
#include<iostream>
#include<queue>
#include<limits.h>
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

class NodeData{
    public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;

    NodeData(){

    }
    NodeData(int size,int max,int min,bool valid)
    {
        this->size=size;
        minVal=min;
        maxVal=max;
        validBST=valid;
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
void levelOrderTraversal(Node* root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        //stepA
        Node* temp=q.front();
        //StepB
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);       
            }
        }
        else{
            //StepC
            cout<<temp->data<<" ";
            //StepD
            if(temp->left)
            {
                q.push(temp->left);//agar left me child hai to queue me daal do
            }
            if(temp->right)
            {
                q.push(temp->right);//agar right me child hai to queue me daal do
            }
        }
     

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
void preorderTraversal(Node* root)
{
    //NLR
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void inorderTraversal(Node* root)
{
    //LNR
    if(root==NULL)
    return;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
void postorderTraversal(Node* root)
{
    //LNR
    if(root==NULL)
    return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
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

int minVal(Node* root)
{
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }

    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int maxVal(Node* root)
{
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }

    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}

Node* deleteNodeInBST(Node* root,int target)
{
   //base case 
   if(root==NULL)
   {
    return NULL;
   }

   if(root->data==target){
    //isi ko delete krna hai
    //4 cases
    if(root->left==NULL && root->right==NULL){
        //leaf node
        delete root;
        return NULL;
    }else if(root->left==NULL && root->right!=NULL){
        Node* child=root->right;
        delete root;
        return child;
    }else if(root->left!=NULL && root->right==NULL){
        Node* child=root->left;
        delete root;
        return child;
    }else{
        //both child
        //find inorder predecessor in left subtree
        int inorderPre=maxVal(root->left);
        //replace root->data value with inorder predecessor
        root->data=inorderPre;
        //delete inorder predecressor from left subtree
        root->left=deleteNodeInBST(root->left,inorderPre);
        return root;
    }

   }else if(target>root->data){
    //right jana chahiye
    root->right=deleteNodeInBST(root->right,target);
   }else if(target<root->data){
    //left jana chahiye
    root->left=deleteNodeInBST(root->left,target);
   }
    return root;
}

Node* bstUsingInorder(int inorder[] ,int s,int e){
    //base case
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    int element=inorder[mid];
    Node* root=new Node(element);

    root->left=bstUsingInorder(inorder,s,mid-1);
    root->right=bstUsingInorder(inorder,mid+1,e);

    return root;
}
//TC:O(N)->kyonki har baar ek node hi pich kr rhe hain

void convertIntoSortedDLL(Node* root,Node*& head){
    //base case
    if(root==NULL){
        return;
    }

    //right subtreee int LL
    convertIntoSortedDLL(root->right,head);

    //attach root node
    root->right=head;

    if(head!=NULL)
    head->left=root;


    //update head
    head=root;

    //left subtree linked list
    convertIntoSortedDLL(root->left,head);

}

void printLinkedList(Node* head)
{
    Node* temp=head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}

Node* sortedLinkedListIntoBST(Node*& head,int n){
    //base case
    if(n<=0 || head==NULL)
    return NULL;

    Node* leftSubtree=sortedLinkedListIntoBST(head,n/2);
    
    Node* root=head;
    root->left=leftSubtree;

    head=head->right;

    //right part solve krna hai
    root->right=sortedLinkedListIntoBST(head,n-1-n/2);

    return root;

}

NodeData* findLargetBST(Node* root,int& ans){
    //base case
    if (root==NULL)
    {
        NodeData* temp=new NodeData(0,INT_MIN,INT_MAX,true);
        return temp;
    }
    
    NodeData* leftKaAns=findLargetBST(root->left,ans);
    NodeData* rightKaAns=findLargetBST(root->right,ans);

    //checking starts here
    NodeData* currNodeKaAns=new NodeData();

    currNodeKaAns->size=leftKaAns->size+rightKaAns->size+1;
    currNodeKaAns->maxVal=max(root->data,rightKaAns->maxVal);
    currNodeKaAns->minVal=min(root->data,leftKaAns->minVal);
    if(leftKaAns->validBST && rightKaAns->validBST && root->data> leftKaAns->maxVal &&root->data<rightKaAns->minVal){
        currNodeKaAns->validBST=true; 
    }else{
        currNodeKaAns->validBST=false;
    }

    if(currNodeKaAns->validBST){
        ans=max(ans,currNodeKaAns->size);
    }
    return currNodeKaAns;
}
int main()
{


    // int inorder[]={1,2,3,4,5,6,7,8,9};
    // int s=0;
    // int e=8;

    // Node* root=bstUsingInorder(inorder,s,e);
    // levelOrderTraversal(root);

    // cout<<"Printing sorted linked list: "<<endl;
    // Node* head=NULL;
    // convertIntoSortedDLL(root,head);
    // printLinkedList(head);

    // Node* root1=NULL;
    // root1=sortedLinkedListIntoBST(head,9);
    // cout<<"Doing level order traversal for root 1 "<<endl;
    // levelOrderTraversal(root1);


    // Node* root=NULL;
    // cout<<"Enter the data for node"<<endl;
    // takeInput(root);

    Node* root=new Node(50);
    Node* first=new Node(30);
    Node* second=new Node(60);
    Node* third=new Node(5);
    Node* fourth=new Node(20);
    Node* fifth=new Node(45);
    Node* sixth=new Node(70);
    Node* seventh=new Node(65);
    Node* eighth=new Node(80);
    
    root->left=first;
    root->right=second;
    first->left=third;
    first->right=fourth;
    second->left=fifth;
    second->right=sixth;
    sixth->left=seventh;
    sixth->right=eighth;


    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root);
    
    int ans=0;
    findLargetBST(root,ans);
    cout<<"Largest BST ka size "<<ans<<endl;


    // cout<<endl;
    // cout<<"Printing inorder:"<<endl;
    // inorderTraversal(root);

    // cout<<endl;
    // cout<<"Printing preorder:"<<endl;
    // preorderTraversal(root);

    // cout<<endl;
    // cout<<"Printing postorder:"<<endl;
    // postorderTraversal(root);

    // cout<<endl;
    // int target=50;
    // Node* ans=findNodeInBST(root,target);
    // cout<<"Present or not : "<<ans->data<<endl;


    //find max and min in binary search tree
    // cout<<endl<<"Minimum value: "<<minVal(root)<<endl;
    // cout<<endl<<"Minimum value: "<<maxVal(root)<<endl; 

    // int targetDelete=150;
    // deleteNodeInBST(root,targetDelete);
    // cout<<"After deletion :"<<endl;
    // levelOrderTraversal(root);

return 0;
}