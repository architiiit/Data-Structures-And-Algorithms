//Coding ninjas problem ->remove redundant brackets
#include <bits/stdc++.h> 
using namespace std;

bool findRedundantBrackets(string &s)
{   
    stack<char> st;

    for (int i = 0; i < s.length(); i++) 
    {
        char ch = s[i];
        if(ch >= 97 && ch <= 122)
        {
            continue;
        }  
        else if ((ch == '(') || (ch == '+') || (ch == '-') || (ch == '*') || (ch == '/'))
        {
            st.push(ch);
        }
        else
        { 
            if(!st.empty())
            {
                if(ch == ')')
                {
                    bool hasOperator = false;
                    while(st.top() != '(')
                    {
                        if((st.top() == '+') || (st.top() == '-') || (st.top() == '*') || (st.top() == '/'))
                        {
                            
                            hasOperator = true;
                        }
                        st.pop();
                    }
                    if(!hasOperator)
                    {
                        return true;
                    }
                    // Pop the opening bracket
                }
                    st.pop();
            }      
        }  
    }
    return false;
}
