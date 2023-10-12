// //ASSIGNMENT 11
// //LEETCODE 279

// //PERFECT SQUARES
// class Solution {
// public:
//    int numSquareHelper(int n)
//    {
//        //base case
//         if(n==0) return 1;
//         if(n<0) return 0; 

//        int i=1;
//        int end=sqrt(n);
//        int ans=INT_MAX;
//        while(i<=end)
//        {    
//            int perfectsquare=i*i;
//            int numberOfPerfectSquares=1+numSquareHelper(n-perfectsquare);
//            if(numberOfPerfectSquares<ans)
//            {
//                ans=numberOfPerfectSquares;
//            }
//            i++;
//        }
//        return ans;
//    }
//     int numSquares(int n) 
//     {
//         return numSquareHelper(n)-1;
//     }
// };

//example of why we are retuening n-1 
#include<bits/stdc++.h>
using namespace std;

int numSquares(int n) 
{   
    if(n==0) return 1;

    int i=3;
    int square=i*i;
    int ans=1+numSquares(n-square);
    return ans;
}
int main()
{
    int n=13;
    cout<<numSquares(n)<<endl;
}