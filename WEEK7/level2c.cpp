//finding maximum element from an array
#include<iostream>
#include<limits.h>
using namespace std;
//agar sirf pass by value krenge to har function call me local variable maxi naam ka create hoga jo ki har call ke baad delete ho jaayega
void findMax(int arr[],int n,int i,int& maxi)//pass by reference pass  krna hoga
{
    //base case
    if(i>=n)//array agar poora traverse ho gya to wapas aa jaao
    return;

    //1 case solve krna hai-> current element ko check karo ki wo max hai ya nhi
    if(arr[i]>maxi)
    {
         maxi=arr[i];
    }
    //baaki recursion sambhal lega
    findMax(arr,n,i+1,maxi);
    
}

void findMin(int arr[],int n,int i,int& mini)//pass by reference pass  krna hoga
{
    //base case
    if(i>=n)//array agar poora traverse ho gya to wapas aa jaao
    return;

    //1 case solve krna hai-> current element ko check karo ki wo max hai ya nhi
    if(arr[i]<mini)
    {
        mini=arr[i];
    }

    //baaki recursion sambhal lega
    findMin(arr,n,i+1,mini);
}
int main()
{
    int arr[]={10,30,21,44,32,17,19,66};
    int n=8;

    int maxi=INT_MIN;
    int i=0;
    findMax(arr,n,i,maxi);
    cout<<"maximum number is maxi "<<maxi<<endl;
    int mini=INT_MAX;
    findMin(arr,n,i,mini);
    cout<<"minimum is min :"<<mini<<endl;
return 0;
}