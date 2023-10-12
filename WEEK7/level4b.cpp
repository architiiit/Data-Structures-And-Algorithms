//similar to first question but another form
//finding taget from given array elements given
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>&arr,int& target,int output)
{
    //base case
    if(output==target)
    return 0;

    if(output>target)//negative number 
    {
        return INT_MAX;
    }

    ///let's solve one case 
    int mini=INT_MAX;

    //har ek element ke liye array ke jitne elements hain unki call ja rhi hai
    for(int i=0;i<arr.size();i++)
    {
        int ans=solve(arr,target,output+arr[i]);
        if(ans!=INT_MAX)
        mini=min(mini,ans+1);
    }
    
    return mini;

}

int main()
{

vector<int>arr{3,5}; 
int target=8;
int output=0;
int ans=solve(arr,target,output);
cout<<"answer is "<<ans<<endl;
return 0;
}