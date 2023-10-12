//maximum sum of non adjascent elements
//we have to return the maximum sum of subsequence in which no 2 elments are adjascent
//input array-> 2 1 4 9
// cases 
// 2+9=11,2+4=6,1+9=10,2+9=11
//output is 2+9=11

//INCLUSION EXCLUSION PROBLEM 

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>&arr,int i,int sum,int& maxi)
{
    //base case
    if(i>=arr.size())
    {
       maxi=max(sum,maxi);
       return maxi;
    }

    //include
    solve(arr,i+2,sum+arr[i],maxi);

    //exclude
    solve(arr,i+1,sum,maxi);

}
int main()
{
    vector<int>arr{2,1,4,9};
    int sum=0;
    int maxi=INT_MIN;
    int i=0;
    solve(arr,i,sum,maxi);
    cout<<maxi<<endl; 


return 0;
}