// LEETCODE 134::GAS STATION
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        
        int deficit=0;//kitna petrol kam pad gaya
        int balance=0;//kitna petrol bacha hua hai
        int start=0;//circuit kaha se start krre ho

        for(int i=0;i<gas.size();i++)
        {
            balance+=gas[i]-cost[i];
            if(balance<0)
            {
                deficit+=balance;
                start=i+1;
                balance=0;
            }
        }
        if(deficit+balance>=0)
        {
            return start;
        }
        else{
            return -1;
        }

    }
};