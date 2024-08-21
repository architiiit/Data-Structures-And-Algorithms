// GFG Transform to sum tree
class Solution {
  public:
    int sum(Node* root)
    {
        if(root==NULL)
        return 0;
        if(root->left== NULL && root->right==NULL)
        {
            //leaf node
            int temp=root->data;
            root->data=0;
            return temp;
        }
        
        int lsum=sum(root->left);
        int rsum=sum(root->right);
        int temp=root->data;
        
        root->data=lsum+rsum;
        return lsum+rsum+temp;
    }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        sum(node);
    }
};