// Morris traversal

//Morris inorder traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode* curr=root;

        while(curr!=NULL)
        {
            //left node is NULL then visit it and go right;
            if(curr->left==NULL)
            {
                ans.push_back(curr->val);
                curr=curr->right;
            }
            //Left node is not NULL
            else{
                //find inorder predecessor
                TreeNode* pred=curr->left;
                while(pred->right!=curr && pred->right)
                {
                    pred=pred->right;
                }
                //if pred right node is null then,go left after establishing link from predecessor to current
                if(pred->right==NULL)
                {
                    pred->right=curr;
                    curr=curr->left;
                }
                else{
                    //right node is not null
                    //left is already visited, Go right after visiting current node while removing the link
                    pred->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        return ans;
    }
};