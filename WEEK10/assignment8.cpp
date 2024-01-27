//GFG:Delete N nodes after M nodes of a linked list

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
       if(head==NULL)
       return;
       
       Node* it=head;
       for(int i=0;i<M-1;i++)
       {    //IF m NODES ARE NOT AVAILABLE
            if(it==NULL)
            return;
            it=it->next;
       }
       //it would be at Mth node
       if(it==NULL)
       return;
       
       Node* MthNode=it;
       it=MthNode->next;
       
       for(int i=0;i<N;i++)
       {
           if(it==NULL) break;
           
           Node* temp=it->next;
           delete it;
           it=temp;
       }
       MthNode->next=it;
       //same kaam baar baar karna hai
        linkdelete(it,M,N);
    }
};
