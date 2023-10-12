//ASSIGNMENT 10
//LEETCODE 44

//Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

//     '?' Matches any single character.
//     '*' Matches any sequence of characters (including the empty sequence).

// The matching should cover the entire input string (not partial).

class Solution {
public:
    bool isMatchHelper(string& s,int si,string& p,int pi)
    {
        //base case
        if(si==s.size() && pi==p.size())
        {
            return true;
        }
        if(si==s.size() && pi<p.size())//agar p me sirf * bacha  hoga tab ham true return kar sakte hain
        {
            while(pi<p.size())
            {
                if(p[pi]!='*')
                return false;
                pi++;
            }
            return true;
        }
        //single char matching
        if(s[si]==p[pi]||p[pi]=='?')
        {   //match ho gya hai dono pointers ko aage badahao

            return isMatchHelper(s,si+1,p,pi+1);
        }
        if(p[pi]=='*')
        {
            //treat * as empty or null
            bool caseA=isMatchHelper(s,si,p,pi+1);

            //let * consume one character
            bool caseB=isMatchHelper(s,si+1,p,pi);

            //kahin se bhi true aaya to true return krna hai
            return caseA||caseB;
        }
        //character doesnt match
        return false;
    }
    bool isMatch(string s, string p) 
    {
        int si=0;//pointer index for s string
        int pi=0;//pointer index for pattern string

        return isMatchHelper(s,si,p,pi);
    }
};