// 543.Diametre of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
    if(root==NULL)
    return 0;

    int leftHeight=maxDepth(root->left);
    int rightHeight=maxDepth(root->right);
    int ans=max(leftHeight,rightHeight)+1;
    return ans;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        return 0;

        int opt1=diameterOfBinaryTree(root->left);//sirf left part me diameter bana ho
        int opt2=diameterOfBinaryTree(root->right);//sirf right part me diameter bana ho
        int opt3=maxDepth(root->left)+maxDepth(root->right);//left part plus right part plus root ko mila ke bana ho
        int ans=max(opt1,max(opt2,opt3));
        return ans;
    }
};