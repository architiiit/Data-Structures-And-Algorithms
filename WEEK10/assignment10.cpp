//QUESTION: Merge Nodes In Between Zeroes
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* slow=head;
        ListNode* fast=head->next;
        ListNode* newLastNode=NULL;

        int sum=0;
        while(fast!=NULL)
        {
            if(fast->val!=0)
            {
                sum+=fast->val;

            }
            else{
                //fast ki value is zero
                slow->val=sum;
                sum=0;
                newLastNode=slow;
                slow=slow->next;
            }
            fast=fast->next;
        }
        ListNode* temp=newLastNode->next;

        //just formed new list
        newLastNode->next=NULL;

        //deleting old list
        while(temp)
        {
            ListNode* nxt=temp->next;
            delete temp;
            temp=nxt;
        }
        return head;

    }
};