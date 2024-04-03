//Tree building using preorder and postorder
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
    int pos(vector<int>&postorder,int size,int element)
    {
        for(int i=0;i<size;i++)
        {
            if(postorder[i]==element)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode* constructTree(vector<int>&preorder,vector<int>&postorder,int size,int& preIndex,int postIndexStart,int postIndexEnd)
    {
       
        if(preIndex>=size || postIndexStart>postIndexEnd)
        {
            return NULL;
        }

        //Extract element and form root from preorder
        int element=preorder[preIndex];
        preIndex++;//go to next element in preorder

        TreeNode* root=new TreeNode(element);


        if(postIndexStart==postIndexEnd)
        {
            return root;
        }

        //the next element of preorder is root of left subpart of tree
        //finding next element because first one is root

        int nextElement=preorder[preIndex];
        int position=pos(postorder,size,nextElement);//position of next element 

        // int position=pos(postorder,size,nextElement,postIndexStart,postIndexEnd);
       
        
        root->left=constructTree(preorder,postorder,size,preIndex,postIndexStart,position);
        root->right=constructTree(preorder,postorder,size,preIndex,position+1,postIndexEnd-1);
        

        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int size=preorder.size();
        int preIndex=0;
        int postIndexStart=0;
        int postIndexEnd=size-1;

     return constructTree(preorder,postorder,size,preIndex,postIndexStart,postIndexEnd);
    }
};