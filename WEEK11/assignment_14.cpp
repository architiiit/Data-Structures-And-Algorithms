//Leetcode:402 ->Remove k digits
class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        stack<char>st;
        for(auto digit:num)
        {
            if(k>0)
            {   while(!st.empty()&&st.top()>digit)
                {
                    st.pop();
                    k--;
                    if(k==0)
                    break;
                }
            }
            st.push(digit);
        }
        if(k>0)
        {
            while(!st.empty()&&k)
            {
                st.pop();
                k--;
            }
        }

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        //remove leading zeroes
        while(ans.size()>0 && ans.back()=='0')
        {
            ans.pop_back();
        }
        //get real answer
        reverse(ans.begin(),ans.end());


        return ans==""?"0":ans;

        
    }
};