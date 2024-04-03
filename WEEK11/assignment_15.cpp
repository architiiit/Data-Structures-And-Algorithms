//LEETCODE-739
//DAILY TEMPERATURES
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>ans(temperatures.size(),0);

        for(int i=0;i<temperatures.size();i++)
        {
            int curr=temperatures[i];
            while(!st.empty() && curr>temperatures[st.top()])
            {
                ans[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};