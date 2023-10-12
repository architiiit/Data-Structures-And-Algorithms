// BINARY SEARCH IN A NEARLY SORTED ARRAY
//  ISKA MATLAB HOTA HAI KI KOI BHI ARRAY AGAR SORTED HAI TO USKA KOI BHI ELEMENT 3 JAGAH EXIST KR SAKTA HAI APNE INDEX KE LIKE AGAR i par hai element
// to vo i-1 ya i+1 pr ho sakta hai AGAR AISA HOTA HAI TO HAM ISE NEARLY SORTED BOLTE HAIN
#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> arr, int target)
{
    int s = 0; 
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
            return mid;

        if (mid - 1 >= s && arr[mid - 1] == target) // PICHE CHECK KRNA
            return mid - 1;

        if (mid + 1 <= e && arr[mid + 1] == target) // AAGE CHECK KRNA
            return mid + 1;

        if (target > arr[mid])
        {
            s = mid + 2; // MID+1 ALREADY CHECK HO GYA
        }
        else
        {
            e = mid - 2; // MID-1 ALREADY CHECKED HAI
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 40;

    int ans = binarysearch(arr, target);
    cout << "index of " << target << " is " << ans << endl;
} 