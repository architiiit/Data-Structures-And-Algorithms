//LEETCODE:61 Rotate List

class Solution {
public:
    int getLength(ListNode* head)
    {
        int len=0;
        while(head!=NULL)
        {
            len++;
            head=head->next;

        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL) return NULL;

        int len=getLength(head);
        int actualRotateK=(k % len);
        if(actualRotateK==0)
        {
            return head;
        }
        int newLastNodePos=len-actualRotateK-1;

        
        ListNode* newLastNode=head;
        for(int i=0;i<newLastNodePos;i++)
        {
            newLastNode=newLastNode->next;
        }
        ListNode* newHead=newLastNode->next;
        newLastNode->next=NULL;

        ListNode* it=newHead;
        while(it->next!=NULL)
        {
            it=it->next;
        } 
        it->next=head;
        return newHead;

    }
};