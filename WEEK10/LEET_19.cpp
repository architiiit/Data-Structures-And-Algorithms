//19. Remove Nth Node From End of List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL)return NULL;
        if(head->next==NULL) return NULL;
        ListNode* slow=head; 
        ListNode* fast=head;
        int counter=0; 
        while(counter<n)
        {   
            fast=fast->next;
            counter++;
        }

        if (fast == NULL)
        return head->next;

        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(slow->next!=NULL)
        
        slow->next=slow->next->next;

        return head;
    }
};