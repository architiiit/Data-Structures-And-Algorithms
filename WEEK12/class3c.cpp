//Leetcode 239:Sliding Window Maximum
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;

        //first window of k size
        for(int i=0;i<k;i++)
        {
            //choote elements ko remove krdo
            while(!dq.empty() && nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }

            //inserting index, so that we can check out of window element
            dq.push_back(i);

        }

        //store answer for first window
        ans.push_back(nums[dq.front()]);

        //remaining windows ko process krna hai
        for(int i=k;i<nums.size();i++)
        {
            //out of window element ko remove krdia
            if(!dq.empty() && (i-dq.front()>= k))
            {
               dq.pop_front(); 
            }

            // ab firse current element ke liye chhote element ko remove krna hai
             //choote elements ko remove krdo
            while(!dq.empty() && nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }

            //inserting index, so that we can check out of window element
            dq.push_back(i);

            //current window ka answer store krna hai
            ans.push_back(nums[dq.front()]);
        }
        return ans;

    }
};