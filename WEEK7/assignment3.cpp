//QUESTION 6
//PRINTING SUBARRAY USING RECURSION

#include<iostream>
#include<vector>
using namespace std;
void printSubarray_util(vector<int> &nums,int start,int end)
{
    //base case 
    if(end>=nums.size())
    {
        return ;
    }


    //1 case solve
    for(int i=start;i<=end;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    //recursion
    printSubarray_util(nums,start,end+1);
}

//HAR BAAR START FIXED REHTA HAI AUR END KE LIYE EK FUNCTION BANA DENGE\
 
void printSubarray(vector<int>&nums)
{
    for(int start=0;start<nums.size();start++)
    {
        int end=start;
        printSubarray_util(nums,start,end);
    }
}
int main()
{
    vector<int>v{1,2,3,4,5};
    printSubarray(v);
return 0;
}