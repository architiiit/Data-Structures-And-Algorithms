//class3
#include<iostream>
#include<queue>
using namespace std;
string solve(string str)
{
    int freq[26]={0};//because there are 26 alphabets
    queue<char>q;


    string ans="";


    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];

        //frequency increment
        freq[ch-'a']++;

        //q.push
        q.push(ch);
        
        while(!q.empty())
        {
            
            if(freq[q.front()-'a']>1)
            {
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }

        //ho sakta hai kabhi else case aaye hi nhi to hamara queue finally empty ho jaayega 
        if(q.empty())
        {
            ans.push_back('#');
        }
    }   
    return ans;
}
int main()
{
    string str="aabc";
    cout<<"Final answer is : "<<solve(str)<<endl;

    return 0;
}