#include <iostream>
#include <vector>
using namespace std;
    int findpivot(vector<int> arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {   
            cout<<s<<" "<<e<<" "<<mid<<" "<<endl;
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
int main() {
  vector<int> arr{ 1,2,3,4,3,2,1};

  cout << findpivot(arr) << endl;

  return 0;
}