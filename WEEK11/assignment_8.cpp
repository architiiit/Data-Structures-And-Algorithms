//LEETCODE 1003: CHECK IF WORD IS VALID AFTER SUBSTITUTION


class Solution {
public:
    bool isValid(string s) 
    {   if(s.size()==0)
        {
            return true;
        }
        int fnd=s.find("abc");
        if(fnd!=string::npos)
        {
            //found
            string tleft=s.substr(0,fnd);
            string tright=s.substr(fnd+3,s.size());//s.size() se jitni bhi bachi string hai usko right me daal do
            return isValid(tleft+tright);

        }
        return false;
    }
};

//TC:O(N^2)


//using stack
class Solution {
public:
    bool isValid(string s) 
    {   
        if(s[0]!='a')
        {
            return false;
        }
        stack<char>st;
        for(char ch:s)
        {
            if(ch=='a')
            {
                st.push(ch);
            }
            else if(ch=='b')
            {
                if(!st.empty() && st.top()=='a')
                {
                    st.push('b');
                }
                else{
                    return false;
                }
            }
            else{
                //ch=='c'
                if(!st.empty() && st.top()=='b')
                {
                    st.pop();
                    if(!st.empty() && st.top()=='a')
                    {
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return st.empty() ? true:false;
    }
};