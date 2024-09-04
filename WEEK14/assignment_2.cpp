//inorder successor gfg
class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        Node* curr=root;
        Node* suc=NULL;
        while(curr)
        {
            if(curr->data>x->data)
            {
                suc=curr;
                curr=curr->left;
            }else{
                curr=curr->right;
            }
        }
        return suc;
    }
};