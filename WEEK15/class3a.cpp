//Merge k sorted arrays

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Info{
    public:
    int data;
    int rowIndex;
    int colIndex;

    Info(int a,int b,int c){
        this->data=a;
        this->rowIndex=b;
        this->colIndex=c;
    }
};
class comparator{
    public:
        bool operator()(Info* a,Info* b){
            return a->data>b->data;//min heap
        }
};
void mergeKSortedArrays(int arr[][4],int n,int k,vector<int>&ans){
    priority_queue<Info*,vector<Info*>,comparator>pq;

    //step1: process first k elements

    for(int row=0;row<k;row++){
        int element=arr[row][0];
        Info* temp=new Info(element,row,0);
        pq.push(temp);
    }

    while(!pq.empty()){
        Info* temp=pq.top();
        pq.pop();
        int topData=temp->data;
        int topRow=temp->rowIndex;
        int topCol=temp->colIndex;


        //store in ans vector
        ans.push_back(topData);

        //next element for the same row jisme se pop hua hai just abhi
        //use insert bhi to karna hai
        if(topCol+1<n){
            //iska matlab row me abhi aur elements present hain
            Info* newInfo=new Info(arr[topRow][topCol+1],topRow,topCol+1);
            pq.push(newInfo);
        }

    }
}
int main()
{
    int arr[3][4]={
        {1,4,8,11},
        {2,3,6,10},
        {5,7,12,14}
    };
    int n=4;
    int k=3;
    vector<int>ans;
    mergeKSortedArrays(arr,n,k,ans);
    cout<<"Printing the answers"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
