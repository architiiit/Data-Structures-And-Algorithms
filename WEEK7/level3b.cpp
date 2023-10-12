//binary search using recursion
//binary search hamesha sorted array me lgate hain

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>&arr,int s,int e,int& target)
{
    //base case
    
    if(s>e)//case 1 ->key not found
    return -1;

    int mid=(s+e)/2;
    if(arr[mid]==target)//case2->key found
    return mid;

    if(arr[mid]<target) //agar mera arr[mid] < key ->right me search 
    {
        return binarySearch(arr,mid+1,e,target);
    }
    else //agar mera arr[mid]>key->left me search
    {
        return binarySearch(arr,s,mid-1,target);
    }

}
int main()
{
vector<int>v{10,20,40,60,70,90,99};
int target=99;
int s=0;
int e=v.size()-1;
int ans=binarySearch(v,s,e,target);
cout<<"answer is : "<<ans<<endl;

return 0;
}