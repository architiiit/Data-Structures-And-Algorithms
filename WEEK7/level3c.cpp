// // SUBSEQUENCES OF A STRING
// #include<iostream>
// using namespace std;

// void printSubsequences(string str,string output,int i)
// {
//     //base case
//     if(i>=str.length())
//     {
//         cout<<output<<endl;
//         return ;
//     }

//     //exclude
//     printSubsequences(str,output,i+1);


//     //include
//     output.push_back(str[i]);//concatenation of output string and ith character of string
//     printSubsequences(str,output,i+1);

// }

// int main()
// {
// string str="abc";
// string output="";
// int i=0;
// printSubsequences(str,output,i);

// return 0;
// }

//************************** 
//same case agar vector me store krna ho tab

// // SUBSEQUENCES OF A STRING
#include<iostream>
#include<vector>
using namespace std;

void printSubsequences(string str,string output,int i,vector<string>&v)
{
    //base case
    if(i>=str.length())//jab i bahar nikal jaata ho tab push kr denge output ko
    {
        v.push_back(output);
        return ;
    }

    //exclude
    printSubsequences(str,output,i+1,v);


    //include
    output.push_back(str[i]);//concatenation of output string and ith character of string
    printSubsequences(str,output,i+1,v);

}

int main()
{
string str="abc";
string output="";
int i=0;
vector<string>v;
printSubsequences(str,output,i,v);
for(auto out:v)
{
    cout<<out<<endl;
}
cout<<"size of vector "<<v.size()<<endl;
return 0;
}
