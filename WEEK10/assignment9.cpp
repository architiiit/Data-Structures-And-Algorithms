//LEETCODE 2058 Max and min number of nodes b/w critical points
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        vector<int>ans{-1,-1};//stores min and max distance

        ListNode* prev=head;
        if(prev==NULL) 
        return ans;

        ListNode* curr=head->next;
        if(curr==NULL)
        return ans;

        ListNode* nxt=head->next->next;
        if(nxt==NULL)
        return ans;

        //finding minimum and maximum
        //maximum nikalne ke first aur last critical points kon compare krenge
        //minimum nikalne ke liye current aur abhi just jo critical point gaya hai usko compare krenge

        int firstCP=-1;
        int lastCP=-1;
        int miniDist=INT_MAX;
        int i=1;

        while(nxt!=NULL)
        {
            bool isCP=((curr->val>prev->val)&&(curr->val>nxt->val)||(curr->val<prev->val)&&(curr->val<nxt->val))  ? true : false;

            if(isCP && firstCP==-1)
            {
                firstCP=i;
                lastCP=i;
            }
            else if(isCP){
                miniDist=min(miniDist,i-lastCP);
                lastCP=i;
            }
            ++i;
            prev=prev->next;
            curr=curr->next;
            nxt=nxt->next;

        }
        int maxiDist=lastCP-firstCP;

        if(lastCP==firstCP)//ek hi critical point mila hai
        {
            return ans;
        }
        else{
            ans[0]=miniDist;
            ans[1]=maxiDist;
        }
        return ans;
    }
};