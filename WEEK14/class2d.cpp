// build binary tree from inorder
#include<iostream>
#include<queue>
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
int main()
{
    int inorder[]={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=8;

    Node* root=bstUsingInorder(inorder,s,e);
    levelOrderTraversal(root);

    // Node* root=NULL;
    // cout<<"Enter the data for node"<<endl;
    // takeInput(root);
    // cout<<"Printing the tree"<<endl;
    // levelOrderTraversal(root);
    
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