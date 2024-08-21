//class2
//Leetcode 110 check balanced tree
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
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);

        int ans=1+max(leftHeight,rightHeight);

        return ans;
    }
    bool isBalanced(TreeNode* root) {
        //Base case
        if(root==NULL)
        {
            return true;
        }

        //1 Case
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        int diff=abs(leftHeight-rightHeight);

        bool ans1=(diff<=1);

        //Recursion

        bool leftAns=isBalanced(root->left);
        bool rightAns=isBalanced(root->right);

        if(ans1 && leftAns &&rightAns)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

//Fast way to find height balance tree
class Solution {
public:
    bool isbalanced=true;
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;

        int lh=height(root->left);
        int rh=height(root->right);
        // check for current node is it balanced
        if(isbalanced && abs(lh-rh)>1){
            isbalanced=false;
        }
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return isbalanced;
    }
};