//LEETCODE 921 ::min add to make parenthesis valid 
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                count++;
                st.push(ch);
            }
            else{
                if(!st.empty())
                {
                    count--;
                    st.pop();
                }
                else{
                    count++;
                }
            }
        }
        return count;
       
    }
};