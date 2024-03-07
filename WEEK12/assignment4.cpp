//Sum of max and min element of all subarray of size k

#include<iostream>
#include<deque>
#include<vector>

using namespace std;
int sumOfMaxMinSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq1,dq2;
        int ans=0;

        //first window of k size
        for(int i=0;i<k;i++)
        {
            //choote elements ko remove krdo
            while(!dq1.empty() && nums[i]>=nums[dq1.back()])
            {
                dq1.pop_back();
            }
            //bada element remove kr do
            while(!dq2.empty() && nums[i]<=nums[dq2.back()])
            {
                dq2.pop_back();
            }

            //inserting index, so that we can check out of window element
            dq1.push_back(i);
            dq2.push_back(i);

        }

        ans+=nums[dq1.front()]+nums[dq2.front()];

        //remaining windows ko process krna hai
        for(int i=k;i<nums.size();i++)
        {
            //out of window element ko remove krdia
            if(!dq1.empty() && (i-dq1.front()>= k))
            {
               dq1.pop_front(); 
            }
              //out of window element ko remove krdia
            if(!dq2.empty() && (i-dq2.front()>= k))
            {
               dq2.pop_front(); 
            }

            // ab firse current element ke liye chhote element ko remove krna hai
             //choote elements ko remove krdo
            while(!dq1.empty() && nums[i]>=nums[dq1.back()])
            {
                dq1.pop_back();
            }
              // ab firse current element ke liye bade element ko remove krna hai
             //bade elements ko remove krdo
            while(!dq2.empty() && nums[i]<=nums[dq2.back()])
            {
                dq2.pop_back();
            }

            //inserting index, so that we can check out of window element
            dq1.push_back(i);
            dq2.push_back(i);

            ans+=nums[dq1.front()]+nums[dq2.front()];
        }
        
        return ans;
    }
int main()
{
vector<int>v{2,5,-1,7,-3,-1,-2};
int k=4;
cout<<sumOfMaxMinSlidingWindow(v,k);
}