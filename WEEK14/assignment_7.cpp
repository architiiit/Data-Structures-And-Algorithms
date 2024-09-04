// dead end in bst ::GFG

class Solution{
  public:
    void func(Node* root,unordered_map<int,bool>&visited,bool&ans)
    {
        if(root==NULL)
        return;
        
        visited[root->data]=true;//mark visited
        if(root->left==NULL && root->right==NULL)
        {
            //leaf node
            int nPlus1=root->data+1;
            int nMinus1=root->data-1==0 ? root->data:root->data-1;
            
            if(visited.find(nPlus1)!=visited.end() && visited.find(nMinus1)!=visited.end())
            {
                ans=true;
                return;
            }
        }
        func(root->left,visited,ans);
        func(root->right,visited,ans);
    }
    bool isDeadEnd(Node *root)
    {
        bool ans=false;//checks if dead end is there or not
        unordered_map<int,bool>visited;
        func(root,visited,ans);
        return ans;
    }
};