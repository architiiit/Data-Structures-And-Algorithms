// //QUESTION 1
// //LAST OCCURENCE OF A CHARACTER USING RECURSION


// #include<iostream>
// using namespace std;
// // void lastOccLTR(string& s,char x,int i,int& ans)
// // {
// //     //base case
// //     if(i>=s.size())
// //     {
// //         return;
// //     }
// //     //ek case solve
// //     if(s[i]==x)
// //     {
// //         ans=i;
// //     }
// //     lastOccLTR(s,x,i+1,ans);
// // }
// void lastOccRTL(string& s,char x,int j,int& ans)
// {
//     //base case
//     if(j<0)
//     {
//         return;
//     }
//     //ek case solve
//     if(s[j]==x)
//     {
//         ans=j;
//         return ;
//     }
//     lastOccRTL(s,x,j-1,ans);
// }
// int main()
// {
//     string s;
//     cin>>s;
//     char x;
//     cin>>x;

//     // int ans1=-1;
//     // int i=0;
//     // lastOccLTR(s,x,i,ans1);//left to right 
//     // cout<<ans1<<endl;


//     int j=s.size()-1;
//     int ans2=-1;
//     lastOccRTL(s,x,j,ans2);//right to left
//     cout<<ans2<<endl;
// return 0;
// }


//QUESTION 2
//REVERSE A STRING USING RECURSION
#include<iostream>
using namespace std;
void reverse(string& s,int start,int end)
{
    //base case
    if(start>=end)
    {
        return ;
    }
    //ek case solve
    swap(s[start],s[end]);

    //baaki recursion samhaal lega
    reverse(s,start+1,end-1);
}

int main()
{
    string s;
    cin>>s;
    int start=0;
    int end=s.length()-1;
    reverse(s,start,end);
    cout<<s<<endl;

return 0;
}