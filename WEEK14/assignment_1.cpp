//inorder predecessor 


Node* findPredecessor(Node* root, Node* p) {
    // add your logic here
	Node* pred=NULL;
	Node* curr=root;
	
	while(curr!=NULL)
	{
		if(curr->data<p->data){
			pred=curr;
			curr=curr->right;
		}
		else{
			curr=curr->left;
		}
	}
	return pred;
}




class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        Node* curr=root;
        
        while(curr)
        {       
            if(curr->key<key)
            {
                pre=curr;
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
        }
        
        curr=root;
        while(curr){
            if(curr->key>key){
                suc=curr;
                curr=curr->left;
            }else{
                curr=curr->right;
            }
        }
    }
};