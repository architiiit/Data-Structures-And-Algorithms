//Leetcode 938 :range sum of a bst
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
        return 0;
        int ans=0;
        
        bool wasInRange=false;
        if(root->val>=low && root->val<=high){
            wasInRange=true;
            ans+=root->val;
        }
        if(wasInRange){
            ans+=rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
        }
        else if(root->val<low){
            ans+=rangeSumBST(root->right,low,high);
        }else if(root->val>high){
            ans+=rangeSumBST(root->left,low,high);
        }
       return ans;
    }
};
//average case complexity O(height)
//worst case O(n)

class Solution {
public:
    void helper(TreeNode* root,int low,int high,int& sum)
    {
        if(root==NULL)
        return;

        if(root->val>=low && root->val<=high)
        {
            sum+=root->val;
        }
        helper(root->left,low,high,sum);
        helper(root->right,low,high,sum);

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        helper(root,low,high,ans);
        return ans;
    }
};

//average case complexity O(n)
//worst case O(n)
