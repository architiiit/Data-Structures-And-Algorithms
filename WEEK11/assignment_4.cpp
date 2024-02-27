//GFG:Celebrity Problem

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>st;
        
        //step 1:push all persons into stack
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        //step 2:discard method to get a might be celebrity
        while(st.size()!=1)
        {
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            
            //if a knows b??
            if(M[a][b]==1)
            {
                //a knows b
                //a is not celebrity,b might be
                //discard a
                
                //push b again
                st.push(b);
            }
            else{
                //b knows a
                //b is not celebrity, a might be
                //discard b
                
                //push a again
                st.push(a);
            }
        }
        //step3:check that that single is actually celebrity or not??
        int mightBeCelebrity=st.top();
        //only one element remains
        
        //Celebrity should not know anyone
        for(int i=0;i<n;i++)
        {
            if(M[mightBeCelebrity][i]!=0)
            {
                return -1;
            }
        }
        //everyone should know celebrity
        for(int i=0;i<n;i++)
        {
            if(M[i][mightBeCelebrity]==0 && i!= mightBeCelebrity)
            {
                return -1;
            }
        }
        
        //might be celebrity is the celebrity
        return mightBeCelebrity;
    }
};