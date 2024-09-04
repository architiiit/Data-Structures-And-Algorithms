//Merge 2 BST::GFG
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int>ans;//stores sorted elements of both the trees
        stack<Node*>sa,sb;
        Node* a=root1;
        Node* b=root2;
        
        while(a || b ||!sa.empty() || !sb.empty())
        {
            while(a){
                sa.push(a);
                a=a->left;
            }
            while(b){
                sb.push(b);
                b=b->left;
            }
            if(sb.empty() || (!sa.empty() && sa.top()->data<=sb.top()->data)){
                auto atop=sa.top();
                ans.push_back(atop->data);
                sa.pop();
                a=atop->right;
            }
            else if(sa.empty() || (!sb.empty() && sa.top()->data>=sb.top()->data)){
                auto btop=sb.top();
                ans.push_back(btop->data);
                sb.pop();
                b=btop->right;
            }
        }
        return ans;
    }
};
