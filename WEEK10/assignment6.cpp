//LEETCODE :138. Copy List with Random Pointer


//APPROACH1: USING HASHMAP
class Solution {
public:
    Node* helper(Node* &head,unordered_map<Node*,Node*>&mp)
    {
        if(head==NULL) return NULL;

        Node* newHead=new Node(head->val);
        mp[head]=newHead;
        newHead->next=helper(head->next,mp);
        if(head->random!=NULL)
        {
            newHead->random=mp[head->random];
        }
        return newHead;   
        //SC:O(n)
    }

    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;//old node se new node ki mapping
        return helper(head,mp);
    }
};

//approach 2
class Solution {
public:
    Node* helper(Node* head)
    {
        //SC::O(1)
        //without using mapping
        if(head==NULL) return NULL;

        //step1: clone A->A'
        Node* it=head;//iterate over old head
        while(it!=NULL)
        {
            Node* clonedNode=new Node(it->val);
            clonedNode->next=it->next;
            it->next=clonedNode;
            it=it->next->next;

        }
        //step 2:Assign random random links of A' with the help of old node A
        it=head;
        while(it!=NULL)
        {
            Node* clonedNode=it->next;
            if(it->random!=NULL)
            {
                clonedNode->random=it->random->next;
            }else{
                clonedNode->random=NULL;
            }
            it=it->next->next;
        }
        //Step 3:Detach A' from A
        it=head;
        Node* clonedHead=it->next;
        while(it!=NULL)
        {
            Node* clonedNode=it->next;
            it->next=it->next->next;

            if(clonedNode->next!=NULL)
            {
                clonedNode->next=clonedNode->next->next;
            }
            it=it->next;
        }

        return clonedHead;
    }
    Node* copyRandomList(Node* head) 
    {
        return helper(head);
    }
};