#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int findunique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i]; // XOR CONCEPT
    }
    return ans;
}

int main()
{
    // vector<int> arr;
    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl; // elements that could be stored
    // cout << sizeof(arr) / sizeof(int) << endl;
//     // insert
//     arr.push_back(5);
//     arr.push_back(6);
//     arr.push_back(7);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     arr.pop_back();

    // vector<int> brr(10, -1);
    // cout << "size of brr is" << brr.size() << endl;
    // cout << "capacity of brr is" << brr.capacity() << endl;
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout << brr[i] << " ";
    // }
    // vector<int> arr{10, 20, 40, 60, 70};
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << arr.empty() << endl;


   // find unique elements
//    int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cin >> arr[i];
//     }
//     int uniquelement = findunique(arr);
//     cout << uniquelement << endl;

    //    // UNION OF 2 ARRAYS VERY BASIC CASE
    //      int arr[]={1,3,5,7,9};
    //      int sizea=5;
    //      int brr[]={2,4,6,8};
    //      int sizeb=4;

    //     vector<int>ans;
    //     for(int i=0;i<sizea;i++)
    //     {
    //         ans.push_back(arr[i]);
    //     }

    //     for(int i=0;i<sizeb;i++)
    //     {
    //         ans.push_back(brr[i]);
    //     }
    //     for(int i=0;i<ans.size();i++)
    //     {
    //         cout<<ans[i]<<" ";
    //     }

//     // INTERSECTION OF TWO ARRAYS
//     vector<int> arr{1, 2, 3, 4, 6, 8};
//     vector<int> brr{3, 4, 10};
//     vector<int> ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int element = arr[i];
//         for (int j = 0; j < brr.size(); j++)
//         {
//             if (element == brr[j])
//             {
//                 brr[j] = -1; // mark as checked basically used when elements are repeated
//                 ans.push_back(element);
//             }
//         }
//     }
//     for (auto value : ans)
//     {
//         cout << value << " ";
//     }

//         //PAIRSUM QUESTION
//         vector<int> arr{10, 20, 30, 60, 70};
//         int checksum = 30;
//         for (int i = 0; i < arr.size(); i++)
//         {

//             int element = arr[i];

//             for (int j = i + 1; j < arr.size(); j++)
//             {
//                 if(element+arr[j]==checksum)
//                 {
//                     cout<<"pair is : "<<element<<" "<<arr[j]<<endl;
//                 }
//             }
//         }

//         //TRIPLET SUM

//         vector<int> arr{10,20,30,40};
//         int checksum = 80;

//         for(int i=0; i<arr.size(); i++) {
//         	int element1 = arr[i];

//         	for(int j=i+1; j<arr.size(); j++) {
//         		int element2 = arr[j];

//         		for(int k=j+1; k<arr.size(); k++) {
//         			int element3 = arr[k];

//         			if(element1 + element2 + element3 == checksum) {
//         				cout << element1 <<","<< element2 <<","<< element3 << endl;
//         			}
//         		}
//         	}
//         }

//         //sort 0 and 1s

    vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i != end)
    {
        cout << "for i=" << i << " start=" << start << " end=" << end << endl;
        if (arr[i] == 0)
        {
            cout << "found zero" << endl;
            cout << "before swap ";
            printArray(arr);

            swap(arr[start], arr[i]);
            cout << "after  swap ";
            printArray(arr);
            start++;
            i++;
            cout << "now i=" << i << " start=" << start << " end=" << end << endl;
        }
        else
        {
            cout << "found One" << endl;
            cout << "before swap ";
            printArray(arr);
            swap(arr[end], arr[i]);
            cout << "after  swap "; 
            printArray(arr);
            end--;
            cout << "now i=" << i << " start=" << start << " end=" << end << endl;
        }
    }

    // print
    for (auto val : arr)
    {
        cout << val << " ";
    }

    return 0;
}