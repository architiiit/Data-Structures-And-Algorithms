//Diagonal; traversal og a tree 
//GFG


void diagonalTraversal(Node* root,int d,map<int,vector<int>>&mp)
{
    if(root==NULL)
    return;
    
    mp[d].push_back(root->data);
    diagonalTraversal(root->left,d+1,mp);
    diagonalTraversal(root->right,d,mp);
}
vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   map<int,vector<int>>mp;
   diagonalTraversal(root,0,mp);
   
    for (auto& it : mp) {
        for (int num : it.second) {
            ans.push_back(num);
        }
    }
   return ans;

}

//Method 2
vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   if(root==NULL) return ans;
   
   queue<Node*>q;
   q.push(root);
   
   while(!q.empty())
   {
       Node* temp=q.front();
       q.pop();
       while(temp!=NULL)
       {
           ans.push_back(temp->data);
           if(temp->left)
           {
               q.push(temp->left);
           }
           temp=temp->right;
       }
   }
    return ans;
}
