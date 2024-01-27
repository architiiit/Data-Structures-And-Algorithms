//Question 3:Merge 2 sorted Linked List
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) 
    {
      if(left==NULL) return right;
      if(right==NULL) return left;  

        //create a dummy node
        ListNode* ans=new ListNode(-1);
        ListNode* mptr=ans;

        while(left!=NULL && right!=NULL)
        {
            if(left->val<right->val)
            {
                mptr->next=left;
                mptr=left;
                left=left->next;
            }
            else{
                mptr->next=right;
                mptr=right;
                right=right->next;
            }
        } 
        // if(left!=NULL)
        // {
        //     mptr->next=left;
            
        // }  
        // if(right!=NULL)
        // {
        //     mptr->next=right;
        // }
        while(left!=NULL)
        {
            mptr->next=left;
            mptr=left;
            left=left->next;
        }
        while(right!=NULL)
        {
            mptr->next=right;
            mptr=right;
            right=right->next;
        }
        return ans->next;
    }
};