//LEETCODE 101 Symmetric tree


class Solution {
public:
    bool traversal(TreeNode* p,TreeNode* q)
    {  
        if(p==NULL && q==NULL)
        {
            return true;
        }
        else if(p==NULL && q!=NULL)
        {
            return false;
        }
        else if(p!=NULL && q==NULL)
        {
            return false;
        }
        else{
            
            if(p->val==q->val && traversal(p->left,q->right)&& traversal(p->right,q->left))
            {
                return true;
            }
            else
            {
                return false;
            }
           
        }
    }
    bool isSymmetric(TreeNode* root) 
    {   TreeNode* p=root->left;
        TreeNode* q=root->right;
        return traversal(p,q);
    }
};