//Lowest common ancestor of BST
//235. Lowest Common Ancestor of a Binary Search Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base case 
        if(root==NULL)
        return NULL;
        //case 1
        if(p->val < root->val && q->val<root->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }//case 2
        else if(p->val > root->val && q->val>root->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }//case3 and 4
        else{
            return root;
        }   
        
        
    }
};