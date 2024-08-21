//Maximum sum of non adjascent nodes

class Solution{
  public:
    pair<int,int> getMax(Node* root)
    {
        if(root==NULL)
        return {0,0};
        
        auto left=getMax(root->left);
        auto right=getMax(root->right);
        
        //sum including the node
        int a=root->data+left.second+right.second;
        
        //sum excluding the node
        int b=max(left.first,left.second)+max(right.first,right.second);
        
        return {a,b};
        
    }
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root){ 

        // Add your code here
        auto ans=getMax(root);
        return max(ans.first,ans.second);
    }
};