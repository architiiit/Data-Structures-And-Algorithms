//Leetcode :112 PAth Sum
class Solution {
public:
    void check(TreeNode* root,int targetSum,int& currSum,bool &checker)
    {
        if(root==NULL)
        return;

        if(root->left==NULL &&root->right==NULL)
        {
            //leafNode
            currSum+=root->val;
            if(currSum==targetSum)
            {
                checker=true;
            }
            currSum-=root->val;
            return;
        }
        currSum+=root->val;
        
        check(root->left,targetSum,currSum,checker);
        check(root->right,targetSum,currSum,checker);

        //backtrack
        currSum-=root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool checker=false;
        check(root,targetSum,sum,checker);
        return checker;
    }
};