
// //852. Peak Index in a Mountain Array

// // PEAK ELEMENT IN MOUNTAIN ARRAY
// // 0 10 5 2
// class Solution
// {
// public:
//     int findpeak(vector<int> arr)
//     {
//         int s = 0;
//         int e = arr.size() - 1;
//         int mid = s + (e - s) / 2;
//         while (s < e)
//         {
//             if (arr[mid] < arr[mid + 1])
//             {
//                 s = mid + 1;
//             }
//             else
//             {
//                 e = mid;
//             }
//             mid = s + (e - s) / 2;
//         }
//         return s;
//     }
//     int peakIndexInMountainArray(vector<int> &arr)
//     {
//         return findpeak(arr);
//     }
// };



// finding pivot element
// place where order changes is called pivot element
// rotated sorted array
// 8 9 10 2 4 6
#include <iostream>
#include <vector>
using namespace std;

// THIS CODE WILL NOT WORK IN CASE OF ALREADY SORTED ARRAY AS WE NEED TO ADD ONE MORE CONDITION IN CODE WHICH IS START=END which is modified in class4a code
int findpivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1] && mid + 1 < arr.size())
            return mid;

        if (arr[mid - 1] > arr[mid] && mid - 1 >= 0)
            return mid - 1;

        if (arr[s] >= arr[mid]) // left me seach krenge kyonki hamesha
        {
            e = mid - 1;    
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{3,4,5,6,7,1,2};
    int ans = findpivot(arr);
    cout << "index of pivot element is " << ans << endl;
    return 0;
} 
