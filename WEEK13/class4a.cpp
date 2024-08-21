//TOP view of tree

//Trees class 1
#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree()
{
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    //Step A,B and C
    Node* root=new Node(data);
    cout<<"Enter data for left part of "<<data<<" node "<<endl;
    root->left=buildTree();
    cout<<"Enter data for right part of "<<data<<" node "<<endl;
    root->right=buildTree();

    return root; 
}

void levelOrderTraversalWithLevels(Node* root)
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
void printTopView(Node* root){
    if(root==NULL)
        return;
    //create a map for storing Horizontal Distance->topNode->data
    map<int,int>topNode;

    //Level Order
    //We will store a pair of Node and Horizontal distance
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair<Node*,int>temp=q.front();
        q.pop();

        //extract both parts from temp
        Node* frontNode=temp.first;
        int hd=temp.second;

        //jo bhi horizontal distance aaya hai ,check if answer for that hd already exists or not

        if(topNode.find(hd)==topNode.end())//find function finds key value in map
        {   //agar end tak pahuch gaya hai iska maylab entry nahi mila hoga
            //create entry
            topNode[hd]=frontNode->data;
        }

        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left,hd-1));//left jaate hue ditance ek minus karo
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right,hd+1));//right jaate hue ditance ek plus karo
        }

    }
    //ab answer store hua hoga apke map me
    cout<<"Printing the map values: "<<endl;
    for(auto i:topNode)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }

}

void printBottomView(Node* root){
    if(root==NULL)
        return;
    //create a map for storing Horizontal Distance->topNode->data
    map<int,int>topNode;

    //Level Order
    //We will store a pair of Node and Horizontal distance
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair<Node*,int>temp=q.front();
        q.pop();

        //extract both parts from temp
        Node* frontNode=temp.first;
        int hd=temp.second;

        topNode[hd]=frontNode->data;  //update entry every time 

        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left,hd-1));//left jaate hue ditance ek minus karo
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right,hd+1));//left jaate hue ditance ek plus karo
        }

    }
    //ab answer store hua hoga apke map me
    cout<<"Printing the map values: "<<endl;
    for(auto i:topNode)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }

}
void printLeftView(Node* root,vector<int>&ans,int level)
{   
    //base case
    if(root==NULL)
    {
        return ;
    }
    if(level==ans.size())
    {
        ans.push_back(root->data);
    }
    //left
    printLeftView(root->left,ans,level+1);

    //right
    printLeftView(root->right,ans,level+1);

}

void printRightView(Node* root,vector<int>&ans,int level)
{   
    //base case
    if(root==NULL)
    {
        return ;
    }
    if(level==ans.size())
    {
        ans.push_back(root->data);
    }
    //right
    printRightView(root->right,ans,level+1);

    //left
    printRightView(root->left,ans,level+1);

}

//Boundary Traversal
void printLeftBoundary(Node* root)
{
    //base case
    //if root is null then go back
    if(root==NULL)
    return;

    //if root is leaf node then go back
    if(root->left==NULL &&root->right==NULL)
    return;

    cout<<root->data<<" ";
    if(root->left)
    {
        printLeftBoundary(root->left);
    }
    else
    {
        printLeftBoundary(root->right);
    }

}
void printLeafBoundary(Node* root)
{
    //base case
    if(root==NULL)
    return;

    //if root is leaf node then go back
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
    }

    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root)
{
    //base case
    if(root==NULL)
        return;
    
    if(root->left==NULL && root->right==NULL)
    {
        return;
    }
    if(root->right)
    {
        printRightBoundary(root->right);    
    }
    else{
        printRightBoundary(root->left);
    }
    
    cout<<root->data<<" ";

}
void boundaryTraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    //A
    printLeftBoundary(root->left);

    //B
    printLeafBoundary(root);

    //C
    printRightBoundary(root->right);
}
int main()
{
    Node* root=NULL;
    root=buildTree();
    // printTopView(root);
    // printBottomView(root);

    // //Printing the left view
    // vector<int>ans;
    // int level=0;
    // printLeftView(root,ans,level);
    // for(auto i:ans)
    // {
    //     cout<<i<<" ";
    // }


    // //Printing the right view
    // vector<int>ans;
    // int level=0;
    // printRightView(root,ans,level);
    // for(auto i:ans)
    // {
    //     cout<<i<<" ";
    // }


    //boundary traversal
    boundaryTraversal(root);

return 0;
}