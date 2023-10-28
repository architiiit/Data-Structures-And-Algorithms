//2d array creation using heap
#include<iostream>
using namespace std;

int main()
{
    int row=5;
    int col=3;
    int** arr=new int*[row];//Rhs is pointing to first address
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];//arr is a pointer
    }
    // printing
    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //DEALLOCATION
    for(int i=0;i<row;i++)
    {
        delete []arr[i];
    }
    delete []arr;
return 0;
}