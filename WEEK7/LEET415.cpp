//QUESTION 3
//ADD STRINGS RECURSIVELY
class Solution {
public:
    string addRE(string num1,int p1,string num2,int p2,int carry=0)
    {
        //base case
        if(p1<0 && p2<0)
        {
            if(carry!=0)
            {
                return string(1,carry+'0');
            }
            return "";
        }

        //ek case solve krna hai
        int d1=(p1>=0 ? num1[p1]:'0')-'0';
        int d2=(p2>=0 ? num2[p2]:'0')-'0';
        int csum=d1+d2+carry;
        carry=csum/10;
        int digit=csum%10;
        string ans="";
        ans.push_back(digit+'0');

        //recursion samhaal lega 
        ans+=addRE(num1,p1-1,num2,p2-1,carry);//recursion string return krega
        return ans;
    }
    string addStrings(string num1, string num2)
    {
        string ans=addRE(num1,num1.size()-1,num2,num2.size()-1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//IT TAKES MORE RUN TIME AND SPACE COMPLEXITY IN LEETCODE BECAUSE WE ARE NOT PASSING STRING BY REFERENCE
//SO DURING RECCURSION AGAIAN AND AGAIN COPY OF STRING IS PASSED WHICH TAKES A LOT OF SPACE AND TIME

//IMPROVED THE ABOVE CODE BY USING REFERNCE VARIABLES

class Solution {
public:
    void addRE(string& num1,int p1,string& num2,int p2,string& ans,int carry=0)
    {
        //base case
        if(p1<0 && p2<0)
        {
            if(carry!=0)
            {
            ans.push_back(carry+'0');
            }
            return;
        }
    
        //ek case solve krna hai
        int d1=(p1>=0 ? num1[p1]:'0')-'0';
        int d2=(p2>=0 ? num2[p2]:'0')-'0';
        int csum=d1+d2+carry;
        carry=csum/10;
        int digit=csum%10;
        ans.push_back(digit+'0');


        //recursion samhaal lega 
        addRE(num1,p1-1,num2,p2-1,ans,carry);
        
    }
    string addStrings(string num1, string num2)
    {   string ans="";
        addRE(num1,num1.size()-1,num2,num2.size()-1,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};