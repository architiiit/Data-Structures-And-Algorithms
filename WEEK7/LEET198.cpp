//HOUSE ROBBER PROBLEM
//QUESTION 8

class Solution {
public:

int robberyHelp(vector<int>&nums,int i)
{
  //base case
    if(i>=nums.size())
    return 0;

  //ek case solve
    int rob1=nums[i]+robberyHelp(nums,i+2);
    int rob2=0+robberyHelp(nums,i+1);

    return max(rob1,rob2);
};
    int rob(vector<int>& nums) 
    {
        int i=0;
       return robberyHelp(nums,i); 
    }
};

//THIS CODE WILL NOT GET SUBMITTED BECAUSE IT NEEDS OPTIMISATION 
//WILL DO THIS IN DYNAMIC PROGRAMMING