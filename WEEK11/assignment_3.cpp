//Next greater Element in Linked List

//LEETCODE-1019

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     vector<int> nextLargerNodes(ListNode* head) 
//     {
//         vector<int>arr;
//         ListNode* temp=head;
//         while(temp!=NULL)
//         {
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }   

//         stack<int>st;
//         st.push(INT_MAX);
//         vector<int>ans(arr.size());
//         for(int i=ans.size()-1;i>=0;i--)
//         {
//             int curr=a[i];
//             while(st.top()<=curr)
//             {
//                 st.pop();
//             }
//             ans[i]=st.top();
//             st.push(curr);
//         }

//         for(int i=0;i<ans.size();i++)
//         {
//             if(ans[i]==INT_MAX)
//             {
//                 ans[i]=0;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int>ll;
        while(head!=NULL)
        {
            ll.push_back(head->val);
            head=head->next;
        }
        stack<int>st;
        // vector<int>ans(ll.size());

        for(int i=0;i<ll.size();i++)
        {
            while(!st.empty() && ll[i]>ll[st.top()])
            {
                //means ith element is the next greater of the index present in stack
                int kids=st.top();
                st.pop();
                ll[kids]=ll[i];

            }
            st.push(i);
        }
        while(!st.empty())
        {
            ll[st.top()]=0;
            st.pop();
        }
        return ll;
    }
};