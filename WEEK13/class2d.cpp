//LEETCODE 113 Path sum2
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
    void solve(TreeNode* root,int targetSum,int& currSum,vector<int>&path,vector<vector<int>>&ans)
    {
        //Base case
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {   //Include Leaf Node
             path.push_back(root->val);
            currSum+=root->val;
            //Leaf node pe hi sum check krna hai
            if(currSum==targetSum)
            {
                ans.push_back(path);
            }
            //fir leaf node ko hata dena hai backtrack kr ke
            path.pop_back();
            currSum-=root->val;
            return;
        }
        //Include curr Node
        path.push_back(root->val);
        currSum+=root->val;

        solve(root->left,targetSum,currSum,path,ans);
        solve(root->right,targetSum,currSum,path,ans);

        //Backtrack
        //exclude
        path.pop_back();
        currSum-=root->val;

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        int sum=0;
        vector<int>temp;
        solve(root,targetSum,sum,temp,ans);
        return ans;
    }
};