// // SEARCHING AND SORTING
// // BINARY SEARCH
// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int size, int target)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2; // it may lead to integer overflow
//     while (start <= end)
//     {
//         if (arr[mid] == target)
//         {
//             return mid; // element found
//         }
//         if (target > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return -1; // element not found
// }
// int main()
// {

//     int arr[] = {2, 4, 6, 8, 10, 12, 16};
//     int target;
//     cout << "enter target" << endl;
//     cin >> target;
//     int size = 7;
//     int indexoftarget = binarysearch(arr, size, target);
//     if (indexoftarget == -1)
//     {
//         cout << "target not found " << endl;
//     }
//     else
//     { 
//         cout << "target found at " << indexoftarget << " index" << endl;
//     }
//     return 0;
// }

// binary search from stl
#include <iostream>
#include <algorithm> //used for binary_search definition
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    vector<int> v{1, 2, 3, 4, 5, 6};
    int target;
    cin>>target;
    // FOR VECTORS
    if (binary_search(v.begin(), v.end(), target))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }

    // // FOR ARRAYS
    // if (binary_search(arr, arr + size, 7))
    // {
    //     cout << "element found" << endl;
    // }
    // else
    // {
    //     cout << "element not found" << endl;
    // }
    return 0;
}