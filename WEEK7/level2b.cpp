//PRINTING AN ARRAY 
#include<iostream>
using namespace std;
// void print(int arr[],int n,int i)
// {
//     //base case
//     if(i>=n)
//     return;
 
//     //ek case sove kr diya 
//     cout<<arr[i]<<" ";

//     //baaki recursion samhaal lega
//     print(arr,n,i+1);
// }


//without passing index
void print(int arr[],int n)
{
    //base case
    if(n==0)
    return;

    //ek case sove kr diya 
    cout<<arr[0]<<" ";

    //baaki recursion samhaal lega
    print(arr+1,n-1);
}


int main()
{
int arr[5]={10,20,30,40,50};
int n=5;
int i=0;
//passing index
//print(arr,n,i);

//without passing index
print(arr,n);

return 0;
}