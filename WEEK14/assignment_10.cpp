//Replace elements with least greater elements to its right :: GFG
class Node{
  
  public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insert(Node* root,int data,int&suc){
    if(root==NULL)
    {
        Node* root=new Node(data);
        return root;
    }
    
    if(root->data<=data){
        root->right=insert(root->right,data,suc);
    }
    if(root->data>data){
        suc=root->data;
        root->left=insert(root->left,data,suc);
    }
    
    return root;
}

class Solution{
    public:

    vector<int> findLeastGreater(vector<int>& arr, int n) {
        
        Node* root=NULL;
        vector<int>ans(arr.size());
        for(int i=arr.size()-1;i>=0;i--)
        {
            int succ=-1;
            root=insert(root,arr[i],succ);
            ans[i]=succ;
        }
        return ans;
    }
};
