//remove all duplicates in the string
//LEETCODE: 1047 Remove All Adjacent Duplicates In String
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(auto ch:s)
        {
            if(!st.empty() && st.top()==ch )
            {
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};