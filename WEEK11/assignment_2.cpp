//GFG:Count the Reversal
int countRev (string s)
{
    // your code here
    //odd sized string then impossible to make pairs
    if(s.length() & 1)
    {
        return -1;
    }
    int ans=0;
    stack<char>st;
        for(char ch:s)
        {
            if(ch=='{')
            {
                st.push(ch);
            }
            else{
                if(!st.empty() &&st.top()=='{'){
                        st.pop();
                }
                else{
                        st.push(ch);
                }
                
                
            }
        }
        //if stack is still non empty
        //let's count reversals
        while(!st.empty())
        {
            char a=st.top();
            st.pop();
            char b=st.top();
            st.pop();
            if(a == b)    //" ( ( or ) )  "
            {
                ans+=1;
            }
            else{       //"     ) (     "
                ans+=2;
            }
        }
        return ans;
            
    
}