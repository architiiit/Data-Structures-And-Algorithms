//  FIND AN ODD OCCURING ELEMENT
//        1 1 2 2 3 3 4 4 3 600 600   4  4
// index  0 1 2 3 4 5 6 7 8  9   10   11 12
// All element occur even number of times except one element
// all repeating occurence of element ocurs in pair and pairs are not adjascent(same pairs will not be adjascent)
// find elemnt that occurs in odd no. of pairs
// we can use XOR concept
// XOR A^A=0 A^B=1
// 1^1^2^2^3^3^4^4^3^600^600^4^4==3 BUT TIME COMPLEXITY IS O(N)
// IN THIS QUESTION WE HAVE TO DO INDEX OBSERVATION
// our answer in above array is 3 so if we see on left side of we caan observe that at even index we get first element of pair at even index and second element at odd index
// but on right side of 3 first element of pair is at odd index and second element at even index

#include <iostream>
#include <vector>
using namespace std; 
int findoddoccurence(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1; 
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        { // single element
            return s;
        }
        // 2 cases->mid even

        // mid->even if(mid==mid+1)->left me khada hun->answer right me hoga->start=mid+2
        // mid->even if(mid!=mid+1)->mid can be answer or answer is on left->e=mid(because mid may be an answer)
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        // mid->odd if(mid-1==mid)->left me hai->answer right me hoga->start=mid+1
        // mid->odd if(mid-1!=mid)->mid is not answer as answer will be always in even position e=mid-1
        {
            // mid->odd
            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{

    vector<int> v{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int ans = findoddoccurence(v);
    cout << "odd occurence index is " << ans << endl;
    cout << "odd occurence is " << v[ans] << endl;

    return 0;
}