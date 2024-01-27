//QUESTION ::GFG::Flattening a Linked List
class Solution {
public:
    Node* merge(Node* a,Node *b)
    {
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        Node* ans=NULL;
        
        if(a->data<b->data)
        {
            ans=a;
            a->bottom=merge(a->bottom,b);
        }
        else{
            ans=b;
            b->bottom=merge(a,b->bottom);
        }
        return ans;
        
    }
    Node *flatten(Node *root)
    {
        // Your code here
      if(root==NULL) return NULL;
        Node* mergedLL=merge(root,flatten(root->next));
        return mergedLL;
    }
};