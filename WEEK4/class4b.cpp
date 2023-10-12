// SORTING TECHNIQUES

// SELECTION SORT
 #include<iostream>
 #include<vector>
 using namespace std;
 int main()
 {
 vector<int>arr {10,1,4,8,5,7};
 for(int i=0;i<arr.size()-1;i++)
 {int minindex=i;
     for (int j = i+1; j < arr.size() ; j++)
     {
        if(arr[j]<arr[minindex])
        minindex=j;

    }
    swap(arr[i],arr[minindex]);

}
for(int i=0;i<arr.size();i++) 
{
    cout<<arr[i]<<" ";
}
cout<<endl;

}
// Time complexity O(n^2)
// space complexity O(1)

// BUBBLE SORT
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 1, 4, 8, 5, 7};

    for (int round = 0; round < arr.size() - 1; round++)
    {
        bool swapped = false;
        for (int j = 0; j < arr.size() - round - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped=false)//jab swapping nhi hua ho iska matlab sort ho chuka hai aage krne ka koi jarurat nhi hai
        {
            break;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// TIME COMPLEXITY WORST CASE ->O(n^2)
// BEST CASE TIME COMPLEXITY-> O(n)  WHEN ALREADY SORTED
// SPACE COMPLEXITY O(1)

// INSERTION SORTING
// step1 fetch number
// compare fetched number
// shift
// place copy in empty space


#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>arr {10,1,7,6,14,9};
for(int round=1;round<arr.size();round++)
{ int val=arr[round];//step 1 ->fetch
 //STEP 2 ->COMPARE
 int j=round-1;
         for(;j>=0;j--)
         {
             if(arr[j]>val)//step3->shift
             {
                 arr[j+1]=arr[j];
             }
             else
             {//kuch nhi krna hai kyon ki peeche ke elements sorted honge
                 break;
             }
         }
 //step4->copy
 arr[j+1]=val;
 }

for(auto a:arr)
{
    cout<<a<<endl;
} 

//TIME COMPLEXITY O(n^2)
//BEST CASE O(n) ->already sorted
//SPACE SCOMPLEXITY O(1)
//used in partially sorted arrays

return 0;
}

// INBUILT SORTING IN CPP
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{5, 4, 3, 2, 1};
    sort(v.begin(), v.end());
    for (auto a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}