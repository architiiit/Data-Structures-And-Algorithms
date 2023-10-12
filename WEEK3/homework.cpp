//LEETCODE 75
//SORT COLORS
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         //3 pointer approach
//         int l=0;
//         int m=0;
//         int h=nums.size()-1;
//         while(m<=h)
//         {if(nums[m]==0)
//             {
//                 swap(nums[m],nums[l]);
//                 l++;
//                 m++;
//             }
//             else if(nums[m]==1)
//                 {
//                     m++;
//                 }
//             else{
//                 swap(nums[m],nums[h]);
//                 h--;
//             }

//         }
//     }
// };

// // all neagative numbers on left side
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v{-1, 2, -4, 5, 9, -22};
//     int l = 0;
//     int h = v.size() - 1;
//     while (l < h)
//     {
//         if (v[l] < 0)
//         {
//             l++;
//         } 
//         else if (v[h] > 0)
//         {
//             h--;
//         }
//         else
//         {
//             swap(v[l], v[h]);
//         }
//     }
//     for (auto val : v)
//     {
//         cout << val << " ";
//     }
// }

// // find the missing element
// #include <iostream>
// using namespace std;
// void findmissing(int arr[], int n)
// {
//     // METHOD 1 BY MARKING VISITED
//     for (int i = 0; i < n; i++)
//     {
//         int index = abs(arr[i]);
//         if (arr[index - 1] > 0)
//         {
//             arr[index - 1] *= -1;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//             cout << i + 1 << " ";
//     }

//     // method 2 BY SORTING AND SWAPPING
//     int i = 0;
//     while (i < n)
//     {
//         int index = arr[i] - 1;
//         if (arr[i] != arr[index])
//         {
//             swap(arr[i], arr[index]);
//         }
//         else
//         {
//             i++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != i + 1)
//             cout << i + 1 << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[] = {1, 3, 3, 3, 4};
//     int n = sizeof(arr) / sizeof(int);
//     findmissing(arr, n);

//     return 0;
// }

// // FIND FIRST REPEATING ELEMENT
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int firstRepeated(int arr[], int n)
// {
//     // code here

//     unordered_map<int, int> hash;
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (hash[arr[i]] > 1)
//         {
//             return i + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 5, 5,6};
//     int n = sizeof(arr) / sizeof(int);
//     firstRepeated(arr, n);

//     return 0;
// }

// // //COMMON ELEMENTS FROM 3 sorted ARRAYS
// void commonelements(int a[], int b[], int c[], int n1, int n2, int n3)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     set<int> set;
//     while (i < n1 && j < n2 && k < n3)
//     {
//         if (a[i] == b[j] && b[j] == c[k])
//         {
//             set.insert(a[i]);
//             i++;
//             j++;
//             k++;
//         }
//         else if (a[i] < b[j])
//         {
//             i++;
//         }
//         else if (b[j] < c[k])
//         {
//             j++;
//         }
//         else
//         {
//             k++;
//         }
//     }
//     for (auto i : set)
//     {
//         cout << i << " ";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[] = {1, 5, 10, 20, 40, 80};
//     int n1 = 6;
//     int b[] = {6, 7, 20, 80, 100};
//     int n2 = 5;
//     int c[] = {3, 4, 15, 20, 30, 70, 80, 120};
//     int n3 = 8;
//     commonelements(a, b, c, n1, n2, n3);
// }

// // WAVE PRINT A MATRIX
// #include <iostream>
// #include <vector>
// using namespace std;

// void waveprint(vector<vector<int>> v)
// {
//     int m = v.size();
//     int n = v[0].size();
//     for (int startcol = 0; startcol < n; startcol++)
//     {
//         if ((startcol & 1) == 0)
//         {
//             for (int i = 0; i < m; i++)
//             {
//                 cout << v[i][startcol] << " ";
//             }
//         }
//         else
//         {
//             for (int i = m - 1; i >= 0; i--)
//             {
//                 cout << v[i][startcol] << " ";
//             }
//         }
//     }
// }
// int main()
// {
//     vector<vector<int>> v{
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16},
//         {17, 18, 19, 20}};
//     waveprint(v);
//     return 0;
// }

// // SPIRAL PRINT OF A MATRIX
// #include <iostream>
// #include <vector>
// using namespace std;
// void spiral(vector<vector<int>> &matrix)
// {

//     vector<int> ans;
//     int m = matrix.size();    // rows
//     int n = matrix[0].size(); // cols
//     int total_elements = m * n;
//     int startingrow = 0;
//     int endingrow = m - 1;
//     int startingcol = 0;
//     int endingcol = n - 1;
//     int count = 0;
//     while (count < total_elements)
//     {
//         // printing starting row
//         for (int i = startingcol; i <= endingcol && count < total_elements; i++)
//         {
//             ans.push_back(matrix[startingrow][i]);
//             count++;
//         }
//         startingrow++;
//         // ending column
//         for (int i = startingrow; i <= endingrow && count < total_elements; i++)
//         {
//             ans.push_back(matrix[i][endingcol]);
//             count++;
//         }
//         endingcol--;
//         // ending row
//         for (int i = endingcol; i >= startingcol && count < total_elements; i--)
//         {
//             ans.push_back(matrix[endingrow][i]);
//             count++;
//         }
//         endingrow--;
//         // starting col
//         for (int i = endingrow; i >= startingrow && count < total_elements; i--)
//         {
//             ans.push_back(matrix[i][startingcol]);
//             count++;
//         }
//         startingcol++;
//     }
//     for (auto i : ans)
//     {
//         cout << i << " ";
//     }
// }
// int main()
// {
//     vector<vector<int>> v{{1, 2, 3, 4, 5, 6},
//                           {7, 8, 9, 10, 11, 12},
//                           {13, 14, 15, 16, 17, 18},
//                           {19, 20, 21, 22, 23, 24},
//                           {25, 26, 27, 28, 29, 30}};

//     spiral(v);
//     return 0;
// }

// // ADDITION OF ARRAYS NUMBERS GFG QUESTION

// #include <iostream>
// using namespace std;
// string calc_Sum(int *a, int n, int *b, int m)
// {
//     string ans;
//     int i = n - 1;
//     int j = m - 1;
//     int carry = 0;
//     while (i >= 0 && j >= 0)
//     {
//         int x = a[i] + b[j] + carry;
//         int digit = x % 10;
//         ans.push_back(digit + '0');
//         carry = x / 10;
//         i--;
//         j--;
//     }
//     while (i >= 0)
//     {
//         int x = a[i] + 0 + carry;
//         int digit = x % 10;
//         ans.push_back(digit + '0');
//         carry = x / 10;
//         i--;
//     }
//     while (j >= 0)
//     {
//         int x = 0 + b[j] + carry;
//         int digit = x % 10;
//         ans.push_back(digit + '0');
//         carry = x / 10;
//         j--;
//     }
//     if (carry)
//         ans.push_back(carry + '0');
//     while (ans[ans.size() - 1] == '0')
//     {
//         ans.pop_back();
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// int main()
// {

// }

// // FACTORIAL OF LARGE NUMBER //GFG QUESTION
// //bohot bade number ka factorial int me store krna possible nhi hai
// // ek index me 1 digit store krenge

// #include <bits/stdc++.h>
// using namespace std;
// int factorial(int N)
// {
//     vector<int> ans;// to store factorial
//     ans.push_back(1);//1 push krenge pehle
//     int carry = 0;
// //ye bahar wala loop hai jo multiply krega ek ek kr ke
//     for (int i = 2; i <= N; i++)
//     {
// //element wise multiply krenge answer ke saare elements ko baahar waale loop se
//         for (int j = 0; j < ans.size(); j++)
//         {
//             int x = ans[j] * i + carry;//multiply krenge
//             ans[j] = x % 10;
// //carry next time add hoga
//             carry = x / 10;
//         }
//   //agar bohot bada carry hua to ek ek kr ke push krna hoga
//         while (carry)
//         {
//             ans.push_back(carry % 10);
//             carry /= 10;
//         }
//         carry = 0;
//     }
// //reverse krenge kyonki ulta aayega answer kyonki pushback kr rhe hain
//     reverse(ans.begin(), ans.end());
//     for (auto i : ans)
//     {
//         cout << i;
//     }
// }
// int main()
// {
//     int N;
//     cin >> N;
//     factorial(N);
//     return 0;
// }