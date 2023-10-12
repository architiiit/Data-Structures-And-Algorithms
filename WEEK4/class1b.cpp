// // FIRST OCCURENCE OF AN ELEMENT BINARY SEARCH
//  #include<iostream>
//  #include<vector>
//  using namespace std;

// int firstoccurence(vector<int> v,int target)
// {
//     int s=0;
//     int e=v.size()-1;
//     int ans=-1;
//     int mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(v[mid]==target)
//         {
//             ans=mid; 
//             e=mid-1;
//         }
//         else if(target<v[mid])
//         {
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
//     //TIME COMPLEXITY IS O(log n)
// }

// int main()
// {

// vector<int>v{1,3,3,3,3,3,3,6,7,7,7,7};
// int target;
// cin>>target;
// int indexoffirstocc=firstoccurence(v,target);
// cout<<"index of first occurence is "<<indexoffirstocc<<endl;
// auto ans2 = lower_bound(v.begin(), v.end(), target);
// cout << "answer of first occurence " << ans2 - v.begin() << endl;

// return 0;
// }

// LAST OCCURENCE OF ELEMENT
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lastoccurence(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (v[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (target < v[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
    // TIME COMPLEXITY IS O(log n)
}

int main()
{

    vector<int> v{1, 3, 3, 3, 3, 3, 3, 6, 7, 7, 7, 7};
    int target;
    cin >> target;
    int indexoflastocc = lastoccurence(v, target);
    cout << "index of last occurence is " << indexoflastocc << endl;

    // another inbuilt function         
    auto ans2 = lower_bound(v.begin(), v.end(), target);
    cout << "answer of first occurence " << ans2 - v.begin() << endl;
    return 0;
}