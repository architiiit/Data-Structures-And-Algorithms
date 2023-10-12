//Quicksort
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    //step1:choose pivot element
    int pivotIndex=s;
    int pivotElement=arr[s];

    //step2:find right position for pivot element and place it there
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivotElement)
        {
            count++;
        }
    }
    //jab mai loop se bahar aaya hua,toh mere paas pivot ki right position ka index ready hai
    int rightIndex=s+count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;
    //step3:left me chote right me bade
    int i=s;
    int j=e;

    while(i<pivotIndex &&j>pivotIndex )
    {
        while(arr[i]<=pivotElement)
        {
            i++;
        }
        while(arr[j]>pivotElement)
        {
            j--;
        }
        //2 case ho skte hain
        //A->you found the elements to swap
        //B->no need to swap
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i],arr[j]);
        }
    }
        return pivotIndex;
}
void quickSort(int arr[],int s,int e)
{
    //base case
    //s>e->invalid index 
    //s==e->single element
    if(s>=e)
    return;

    //partition logic
    int p=partition(arr,s,e);

    //recursive calls
    //pivot element->left
    quickSort(arr,s,p-1);
    //pivot element->right 
    quickSort(arr,p+1,e);
}
int main()
{
    int arr[]={4,3,8,4,6,5};
    int n=6;

    int s=0;
    int e=n-1;

    quickSort(arr,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}