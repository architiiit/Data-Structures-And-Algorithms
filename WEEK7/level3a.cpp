//CHECK IF ARRAY IS SORTED OR NOT
#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>&arr,int& n,int i)
{
    //base case
    if(i==n-1)//last element tak hi check kar paayenge is liye i>=n nhi kr rhe hain
    {
        return true;///aage koi element bacha hi nhi hai check krne ka jarurat nhi hai
    }

    //1 case solve krna hai
    if(arr[i+1] < arr[i])
    return false;
    
    //baaki recursion samhaal lega
    return checkSorted(arr,n,i+1);
}

int main()
{   
vector<int>v{10,20,30,40,50,60};
int n=v.size();
int i=0;
bool isSorted=checkSorted(v,n,i);
if(isSorted)
{
    cout<<"array is sorted"<<endl;
}
else{
    cout<<"array is not sorted"<<endl;
}
return 0;
}