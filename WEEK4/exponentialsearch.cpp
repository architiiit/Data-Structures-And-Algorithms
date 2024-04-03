// //ASSIGNMENT 3
// //EXPONENTIAL SEARCH
// //SIMPLY WE ARE APPLYING BINARY SEARCH IN A SUBARRAY IN WHICH WE ARE SURE THAT THE ELEMENT EXIST 
// #include<iostream>
// #include<limits>
// using namespace std;

// int binarySearch(int a[],int s,int e,int target)
// {
//     int mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(a[mid]==target)
//         {
//             return mid;
//         }
//         else if(a[mid]>target)
//         {
//             e=mid-1;
//         }
//         else
//         {
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
// }
// int expSearch(int a[],int n,int x)
// {
//     if(a[0]==x)
//     return 0;
//     int i=1;
//     while(i<n && a[i]<=x)
//     {
//         i=i*2;//left shift 
//     }
//     return binarySearch(a,i/2,min(i,n-1),x);
// }

// int main()
// {
//     int a[]={3,4,5,6,11,13,14,15,56,70};
//     int n=sizeof(a)/sizeof(int);
//     int x=56;
//     int ans=expSearch(a,n,x);
//     cout<<ans<<endl;
//     return 0;
// }

//ASSIGNMENT 3
//EXPONENTIAL SEARCH IN INFINITE ARRAY LENGTH
//WE DONT KNOW size of array because it is infinite
//SIMPLY WE ARE APPLYING BINARY SEARCH IN A SUBARRAY IN WHICH WE ARE SURE THAT THE ELEMENT EXIST 
#include<iostream>
#include<limits>
using namespace std;

int binarySearch(int a[],int s,int e,int target)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(a[mid]==target)
        {
            return mid;
        }
        else if(a[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
}
int expSearch(int a[],int x)
{
   
    int i=0;
    int j=1;
    while(a[j]<=x)
    {   
        i=j;
        j=j*2;//left shift 
    }
    return binarySearch(a,j/2,j,x);
}

int main()
{
    int a[]={3,4,5,6,11,13,14,15,56,70};
    int x=11;
    int ans=expSearch(a,x);
    cout<<ans<<endl;
    return 0;
}

