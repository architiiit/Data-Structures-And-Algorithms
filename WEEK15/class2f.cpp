//given a CBT + BST convert into valid heap

#include<iostream>
#include<vector>
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

void storeInorderTraversal(Node* root,vector<int>&in){
    if(root==NULL){
        return;
    }

    //LNR
    storeInorderTraversal(root->left,in);
    in.push_back(root->data);
    storeInorderTraversal(root->right,in);
}
void replaceUsingPostOrder(Node* root,vector<int>in,int &index){
    if(root==NULL)
    {
        return;
    }
    //LRN
    replaceUsingPostOrder(root->left,in,index);
    replaceUsingPostOrder(root->right,in,index);
    root->data=in[index];
    index++;
}
Node* convertBSTIntoMaxHeap(Node* root){
    //1 step:store inorder
    vector<int>inorder;
    storeInorderTraversal(root,inorder);
    int index=0;
    //replace the node values with the sorted inorder values,using the postorder traversal
    replaceUsingPostOrder(root,inorder,index);
    return root;
}

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
int main()
{
    Node* root=NULL;
    takeInput(root);
    cout<< "Printing the BST "<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"Converting into Heap"<<endl;

    root=convertBSTIntoMaxHeap(root);
    cout<<"Printing the heap:"<<endl;
    levelOrderTraversal(root);

return 0;
}