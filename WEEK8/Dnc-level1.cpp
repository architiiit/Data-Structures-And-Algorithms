#include<iostream>
using namespace std;


void merge(int* arr,int s,int e)
{   
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-(mid+1)+1;

    //dynamic creation of arrays of given lengh
    int* left=new int[len1];
    //dynamically creating array of len1
    int* right=new int[len2];

    //copy values to left array
    int k=s;//starting of first array
    for(int i=0;i<len1;i++)
    {
        left[i]=arr[k];
        k++;
    }
    //copy values to right array
    k=mid+1;//starting of second array
    for(int i=0;i<len2;i++)
    {
        right[i]=arr[k];
        k++;
    }

    //ab merge two sorted arrays wala logic lga lenge
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;

    while(leftIndex<len1 && rightIndex<len2)
    {
        if(left[leftIndex]<right[rightIndex])
        {
            arr[mainArrayIndex++]=left[leftIndex++];
            // mainArrayIndex++;
            // leftIndex++;
        }
        else
        {
            arr[mainArrayIndex++]=right[rightIndex++];
            // mainArrayIndex++;
            // rightIndex++;
        }
    }
    //copy wala logic for
    while(leftIndex<len1)
    {
        arr[mainArrayIndex++]=left[leftIndex++];
    }
      while(rightIndex<len2)
    {
        arr[mainArrayIndex++]=right[rightIndex++];
    }

    //TODO :delete left and right wala newly created array

}
void mergeSort(int* arr,int s,int e)
{
    //base case
    //s==e->single element
    //s>e->invalid index

    if(s>=e)
    return;

    int mid=(s+e)/2;

    //left part sort kar do recursion
    mergeSort(arr,s,mid);

    //right part sort kar do recursion
    mergeSort(arr,mid+1,e);

    //now merge 2 sorted arrays

    merge(arr,s,e);
}
int main()
{
    int arr[]={4,5,13,2,12,9,4,55,323};
    int n=9;

    int s=0;
    int e=n-1;
    //calling mergesort function
    mergeSort(arr,s,e);

    //printing array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}