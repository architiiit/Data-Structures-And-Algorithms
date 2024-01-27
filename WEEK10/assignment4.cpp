//LEETCODE 148. Sort List
//use merge sort
class Solution {
public:
    ListNode* findMid(ListNode* &head)
    {
        ListNode* fast=head->next;
        ListNode* slow=head;

        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right) 
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
        if(left!=NULL)
        {
            mptr->next=left;
            
        }  
        if(right!=NULL)
        {
            mptr->next=right;
        }
       
        return ans->next;
    }
    ListNode* sortList(ListNode* head)
    {
       if(head==NULL)
       return NULL;
       if(head->next==NULL)
       {
           return head;
       }

       //Break Linked List into two haves using mid node
        ListNode* mid=findMid(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;       

       //Sort Recursively
       left=sortList(left);
       right=sortList(right);

       //merge both left and right Linked List
       ListNode* mergedLL=merge(left,right);
       return mergedLL;
    }
};
