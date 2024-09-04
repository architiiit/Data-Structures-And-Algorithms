// find bst using inorder traversal
// Leet 1382 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&in)
    {
        if(root==NULL)return;

        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    TreeNode* balanceTree(int s,int e,vector<int>&in)
    {
        if(s>e) return NULL;
    
        int mid=s+(e-s)/2;
        int element=in[mid];
        TreeNode* root=new TreeNode(element);
        //left
        root->left=balanceTree(s,mid-1,in);
        //right
        root->right=balanceTree(mid+1,e,in);

        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>in;
        inorder(root,in);

        return balanceTree(0,in.size()-1,in);
    }
};