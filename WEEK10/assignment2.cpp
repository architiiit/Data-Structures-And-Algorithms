//LEETCODE:160
//QUESTION 2:Intersection point of two linked lists
// class Solution {  
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* a=headA;
//         ListNode* b=headB;
     
//         while(a->next!=NULL && b->next!=NULL)
//         {
//             if(a==b)
//             {
//                 return a;
//             }
//             a=a->next;
//             b=b->next;
//         }
//         //case if both of them are non intersecting and have same length
//         if(a->next==NULL && b->next==NULL &&a!=b)
//         {
//             return NULL;
//         }
//         if(a->next==NULL)
//         {
//             //B LL is bigger or equal
//             //now we need to find out how much bigger it is
//             int blen=0;
//             while(b->next!=NULL)
//             {
//                 blen++;
//                 b=b->next;
//             }
//             while(blen--)
//             {
//                 headB=headB->next;
//             }
//         }else if(b->next==NULL)
//         {
//             //A LL is bigger or equal
//             //now we need to find out how much bigger it is
//             int alen=0;
//             while(a->next!=NULL)
//             {
//                 alen++;
//                 a=a->next;
//             }
//             while(alen--)
//             {
//                 headA=headA->next;
//             }
//         }
//         while(headA!=headB)
//         {
//             headA=headA->next;
//             headB=headB->next;
//         }
//         return headA;
        
        
//     }
// };
