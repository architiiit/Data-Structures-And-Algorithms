//SOME OPERATIONS WITH STRINGS
//INPUT "LOVEBABBAR"
//KEY "R"
//find key occurences at different indexes and store them
#include<iostream>
#include<vector>
using namespace std;
//try krenge variables ko by reference pass krna kyon ki space kam use hoga by reference pass krna 
void checkKey(string& str,int i,int& n,char& key,vector<int>&ans)//jab bhi recursion me data store krna hota hai to use by reference pass krte hain
{//base case
    if(i>=n)
    {   //key not found
        return ;//when not found
    }
    //ek case solve kr do
    if(str[i]==key)
    {  
        ans.push_back(i); 
    }
    //baaki recursion samhaal lega
   return checkKey(str,i+1,n,key,ans);

}
int main() 
{
string str="lovebabbar";
int n=str.length();
char key='b';
int i=0;
vector<int>ans;
checkKey(str,i,n,key,ans);

for(auto a:ans)
{
    cout<<a<<" ";
}

return 0;
}