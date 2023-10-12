//LEETCODE 22
//GENERATE PARENTHESIS

class Solution {
public:
    void solve(vector<string>&ans,int n,int open,int close,string output)
    {
        //base case
        if(open==0&&close==0)
        {
            ans.push_back(output);
            return;
        }

        //include open
        if(open>0)
        {    output.push_back('(');
            solve(ans,n,open-1,close,output);
            //backtrack
            output.pop_back();
        }

        //include close
        if(close>open)
        {
           output.push_back(')');
            solve(ans,n,open,close-1,output);
            //backtrack
            output.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) 
    {   vector<string>ans;
        int open=n;
        int close=n;
        string output="";
        solve(ans,n,open,close,output);
        return ans;
    }
};
//SIMPLIFIED ABOVE CODE FOR BETTER UBNDER STANDING
//LEETCODE 22
//GENERATE PARENTHESIS

// class Solution {
// public:
//     void solve(vector<string>&ans,int n,int used_open,int used_close,int rem_open,int rem_close,string output)
//     {
//         //base case
//         if(rem_open==0&&rem_close==0)
//         {
//             ans.push_back(output);
//             return;
//         }

//         //include open
//         if(rem_open>0)
//         {    output.push_back('(');
//             solve(ans,n,used_open+1,used_close,rem_open-1,rem_close,output);
//             //backtrack
//             output.pop_back();
//         }

//         //include close
//         if(used_open>used_close)
//         {
//            output.push_back(')');
//             solve(ans,n,used_open,used_close+1,rem_open,rem_close-1,output);
//             //backtrack
//             output.pop_back();
//         }

//     }
//     vector<string> generateParenthesis(int n) 
//     {   vector<string>ans;
//         int used_open=0;
//         int used_close=0;
//         int rem_open=n;
//         int rem_close=n;
//         string output="";
//         solve(ans,n,used_open,used_close,rem_open,rem_close,output);
//         return ans;
//     }
// };