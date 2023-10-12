//QUESTION 13
//LEETCODE 1155
//No of dice rolls with taget sum
class Solution {
public:
    int numRollsToTarget(int n, int k, int target)
    {
        if(target<0) return 0;
        if(target==0 && n==0) return 1;
        if(target!=0 && n==0) return 0;
        if(target==0 && n!=0) return 0;

        int ans=0;
        for(int i=1;i<=k;i++)
        {
            ans+=numRollsToTarget(n-1,k,target-i);
        }
        return ans;

    }
};