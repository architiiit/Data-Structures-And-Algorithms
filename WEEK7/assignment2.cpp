//question 4
//pallindrome check using recursion
#include<iostream>
#include<string>
using namespace std;

bool checkPallindrome(string&s,int start,int end)
{
    //base case
    if(start>=end)
    {
        return true;
    }
    //ek case solve 
    if(s[start]!=s[end])
    {
        return false;
    }
    //baaki recursion samhaal lega
    return  checkPallindrome(s,start+1,end-1);
}
int main()
{
string s="abccba";
int start=0;
int end=s.length()-1;
cout<<checkPallindrome(s,start,end)<<endl;
return 0;
}