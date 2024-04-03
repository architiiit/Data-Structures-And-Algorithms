//LEETCODE 100 Same Tree
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
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
            
            if(p->val==q->val && isSameTree(p->left,q->left)&&isSameTree(p->right,q->right))
            {
                return true;
            }
            else
            {
                return false;
            }
           
        }
    }
};