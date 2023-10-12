//SOME OPERATIONS WITH STRINGS
//INPUT "LOVEBABBAR"
//KEY "R"
//find key using recursion

#include<iostream>
using namespace std;
//try krenge variables ko by reference pass krna kyon ki space kam use hoga by reference pass krna 
bool checkKey(string& str,int i,int& n,char& key)
{//base case
    if(i>=n)
    {   //key not found
        return false;
    }
    //ek case solve kr do
    if(str[i]==key)
    {
         return true;
    }
    //baaki recursion samhaal lega
   return checkKey(str,i+1,n,key);
}
int main()
{
string str="lovebabbar";
int n=str.length();
char key='o';
int i=0;
bool ans=checkKey(str,i,n,key);
cout<<"answer is "<<ans<<endl;

return 0;
}