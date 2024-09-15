#include<iostream>
#include<queue>
using namespace std;


int getKthSmallestElement(int arr[],int k,int n){
    priority_queue<int>pq;
    //first k elements ko process karo
    for(int i=0;i<k;i++){
        int element=arr[i];
        pq.push(element);
    }

    //remaining element ko tab hi insert karenge jab vo root se chote honge
    for(int i=k;i<n;i++)
    {
        int element=arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans=pq.top();
    return ans;
}

int getKthGreatestElement(int arr[],int k,int n)
{
    //use min heap
    priority_queue<int,vector<int>,greater<int>>pq;
    //first k elements ko process karo
    for(int i=0;i<k;i++){
        int element=arr[i];
        pq.push(element);
    }

    //remaining element ko tab hi insert karenge jab vo root se chote honge
    for(int i=k;i<n;i++)
    {
        int element=arr[i];
        if(element>pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans=pq.top();
    return ans;
}
int main()
{
    int arr[]={3,5,4,6,9,8,7};
    int n=7;
    int k=3;
    cout<<"kth Smallest element is "<<getKthSmallestElement(arr,k,7)<<endl;
    cout<<"kth Greatest element is "<<getKthGreatestElement(arr,k,7)<<endl;
    return 0;
}