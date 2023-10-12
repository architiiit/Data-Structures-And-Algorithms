#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    print(arr, size);
}
int main()
{
    // // passby reference concept in arrays
    //  int arr[5]={5,10};
    //  int size=5;
    //  inc(arr,size);
    //  print(arr,size);
    //  cout<<sizeof(arr)/sizeof(int)<<"it is size of array"<<endl;

    // //array creation
    // int arr[53];
    // cout<<"array created successfully"<<endl;
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // //array initialisation 
    // int arr1[]={1,2,3,4,5};
    // int arr2[5]={6,7,8,9,0};
    // int arr3[10]={1,3,5,7};//we can create with less numbers also

    // int arr4[]={1,3,5,7,9};
    // cout<<arr4[4]<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr4[i]<<" ";
    // }
    // //taking input from initialised array
    // int arr5[5];
    // for(int u=0;u<5;u++)
    // {
    //     cin>>arr[u];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    
    // int n;
    // cin>>n;
    // //input numbers
    // int arr[500];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"doubles"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<2*arr[i]<<" ";
    // }

    // int arr[10] = {1, 2};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int arr1[10];
    // memset(arr1, 2, sizeof(arr1));
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr1[i] << " ";
    // }

    // // linear search
    //  int arr[5]={1,3,5,7,8};
    //  int size=5;
    //  int key;
    //  cin>>key;
    //  if(find(arr,size,key))
    //  {
    //      cout<<"found"<<endl;
    //  }
    //  else{
    //      cout<<"not found"<<endl;
    //  }

    // // FINDING MAX OF NUMBER
    //  int arr[10]={3,7,6,9,10,24};
    //  int size=6;
    //  int maxi=INT_MIN;
    //  int mini=INT_MAX;
    //  for(int i=0;i<size;i++)
    //  {
    //      if(arr[i]>maxi)
    //      {
    //          maxi=arr[i];
    //      }
    //      if(arr[i]<mini)
    //      {
    //          mini=arr[i];
    //      }

    // }
    // cout<<"maximum is"<<maxi<<endl;
    // cout<<"maximum is"<<mini<<endl;

    // // printing extreme elements
     int arr[8]={1,2,3,4,5,6,7,8};
     int size=8;

    int start=0;
    int end=size-1;
    while(true)
    {
        if(start>end)
        break;
        if(start==end)
        {
            cout<<arr[start]<<" ";
        }
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
        cout<<endl;
    }

    // // REVERSING AN ARRAY
    // int arr[6] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // int start = 0;
    // int end = size - 1;
    // while (start <= end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}
