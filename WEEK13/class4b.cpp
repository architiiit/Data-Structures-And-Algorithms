
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
void printLeftView(Node* root,map<int,int>&mp,int lvl)
{

    //Approach 1 Level order traversal

    // if(root==NULL)
    // {
    //     return;
    // }
    // queue<Node*>q;
    // q.push(root);
    // q.push(NULL);
    // ans.push_back(root->data);
    // while(!q.empty())
    // {
    //     Node* temp=q.front();
        
    //     q.pop();
        
    //     if(temp==NULL)
    //     {   
        
    //         if(!q.empty())
    //         {   
    //             ans.push_back(q.front()->data);
    //             q.push(NULL);  
    //         }
    //     }
    //     else
    //     {
    //         // cout<<temp->data<<endl;
    //         if(temp->left)
    //         {
    //             q.push(temp->left);
    //         }
    //         if(temp->right)
    //         {
    //             q.push(temp->right);
    //         }
    //     }
    
    //Approach 2->recursion wali approach
        
        if(root==NULL)
        {
            return;
        }
        
        if(mp.find(lvl)==mp.end())
        {
            mp[lvl]=root->data;
        }
        printLeftView(root->left,mp,lvl+1);
        
        printLeftView(root->right,mp,lvl+1);
        
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{   vector<int>ans;
    map<int,int>mp;
   // Your code here
   printLeftView(root,mp,0);
   for(auto i:mp)
   {
       ans.push_back(i.second);
   }
   return ans;
}