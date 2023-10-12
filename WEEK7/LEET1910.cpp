//QUESTION 5
//LEETCODE 1910

class Solution {
public:
    // METHOD 1
    // string removeOccurrences(string s, string part) 
    // {
    //     int pos=s.find(part);
    //     while(pos != string::npos)
    //     {
    //         s.erase(pos,part.length());
    //         pos=s.find(part);
    //     }
    //     return s;
    // }

    //METHOD 2 
    //USING RECURSION
    void removeOccRE(string& s,string& part)
    {
        //base case 


        //ek case solve 
        int found=s.find(part);//batayega ki position kya hai substring ka
        if(found!=string::npos)
        {
            //part string has been located
            //now remove it
            //ab hatane ke baad left string ko right string se 
            //concatenate kr do 
        string left_part=s.substr(0,found);
        string right_part=s.substr(found+part.size(),s.size());
        //left part aur right part mil gya
        s=left_part+right_part;//ab part hat gya hoga


         //baaki recursion sambhaal lega 
            removeOccRE(s,part);
        }
        else//base case
        {
            //all the occurences of part has been removed from s
            return ;
        }
       



    }
    string removeOccurrences(string s, string part) 
    {
        removeOccRE(s,part);
        return s;
    }
};