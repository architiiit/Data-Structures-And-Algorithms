//GFG:: Find median of a BST

float findActualMedian(Node* root,int n)
{
    int i=0;
    int odd1=(n+1)/2;
    int odd1Val=-1;
    
    int even1=n/2;
    int even1Val=-1;
    
    int even2=(n/2)+1;
    int even2Val=-1;
    
    
    Node* curr=root;
    while(curr)
    {
        if(curr->left==NULL)
        {
            i++;
            if(i==odd1)
            odd1Val=curr->data;
            if(i==even1)
            even1Val=curr->data;
            if(i==even2)
            even2Val=curr->data;
            
            curr=curr->right;
        }
        else{
            //predecessor
            Node* pred=curr->left;
            while(pred->right!=curr && pred->right){
                pred=pred->right;
            }
            if(pred->right==NULL){
                pred->right=curr;
                curr=curr->left;
            }
            else{
                pred->right=NULL;
                i++;
                if(i==odd1)
                odd1Val=curr->data;
                if(i==even1)
                even1Val=curr->data;
                if(i==even2)
                even2Val=curr->data;
                curr=curr->right;
            }
        }
    }
    float median=0;
    if((n&1)==0){
        //even
        median=(even1Val+even2Val)/2.0;
    }
    else{
        median=odd1Val;
    }
    
    return median;

}
int findNodeCount(Node* root)
{
    int count=0;
    Node* curr=root;
    while(curr)
    {
        if(curr->left==NULL)
        {
            count++;
            curr=curr->right;
        }
        else{
            //predecessor
            Node* pred=curr->left;
            while(pred->right!=curr && pred->right){
                pred=pred->right;
            }
            if(pred->right==NULL){
                pred->right=curr;
                curr=curr->left;
            }
            else{
                pred->right=NULL;
                count++;
                curr=curr->right;
            }
        }
    }
    return count;
}
float findMedian(struct Node *root)
{
      //Code here
      int n=findNodeCount(root);
      return findActualMedian(root,n);
}