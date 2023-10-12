// #include <iostream>
// #include <limits.h> //used for INT_MAX
// #include <vector>
// using namespace std;

// void print(int arr[][3], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
// }
// void transpose(int arr[][3], int rows, int cols, int transpose[][3])
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             transpose[j][i] = arr[i][j];
//         }
//     }
// }
// void printrowwisesum(int arr[][3], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < cols; j++)
//         {

//             sum += arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }

// void printcolwisesum(int arr[][3], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < cols; j++)
//         {

//             sum += arr[j][i];
//         }
//         cout << sum << endl;
//     }
// }

// bool findkey(int arr[][3], int rows, int cols, int key)
// { 
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (arr[i][j] == key)
//                 return true;
//         }
//     }
//     return false;
// }

// int getmaxi(int arr[][3], int rows, int cols)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < rows; i++)
//     {

//         for (int j = 0; j < cols; j++)
//         {
//             if (arr[i][j] > maxi)
//             {
//                 maxi = arr[i][j];
//             }
//         }
//     }
//     return maxi;
// }
// int main()
// {

//     // // initialisation
//     //  int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     //  cout<<"row wise"<<endl;
//     //  for(int i=0;i<3;i++)
//     //  {
//     //      for(int j=0;j<3;j++)
//     //      {
//     //          cout<<brr[i][j]<<" ";
//     //      }
//     //      cout<<endl;
//     //  }
//     //  cout<<"Column wise"<<endl;
//     //  for(int i=0;i<3;i++)
//     //  {
//     //      for(int j=0;j<3;j++)
//     //      {
//     //          cout<<brr[j][i]<<" ";
//     //      }
//     //      cout<<endl;
//     //  }

//     // int arr[3][3]; // declaration
//     // int rows = 3;
//     // int cols = 3;
//     // for (int i = 0; i < rows; i++)
//     // {
//     //     for (int j = 0; j < cols; j++)
//     //     {
//     //         cin >> arr[j][i];
//     //     }
//     // }
//     // cout << "print row wise" << endl;
//     // for (int i = 0; i < rows; i++)
//     // {
//     //     for (int j = 0; j < cols; j++)
//     //     {
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // cout << "print column wise" << endl;
//     // for (int i = 0; i < rows; i++)
//     // {
//     //     for (int j = 0; j < cols; j++)
//     //     {
//     //         cout << arr[j][i] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     //    // QUESTIONS
//     //    // PRINT ROW SUM
//     //     int arr[3][3];

//     //     int rows = 3;
//     //     int cols = 3;
//     //     for (int i = 0; i < rows; i++)
//     //     {
//     //         for (int j = 0; j < cols; j++)
//     //         {
//     //             cin >> arr[i][j];
//     //         }
//     //     }
//     //     printrowwisesum(arr, rows, cols);
//     //     printcolwisesum(arr, rows, cols);
//     //     cout << "print row wise" << endl;
//     //     for (int i = 0; i < rows; i++)
//     //     {
//     //         for (int j = 0; j < cols; j++)
//     //         {
//     //             cout << arr[i][j] << " ";
//     //         }
//     //         cout << endl;
//     //     }

//     //    // find element
//     //      int arr[3][3];

//     //     int rows = 3;
//     //     int cols = 3;

//     //     for (int i = 0; i < rows; i++)
//     //     {
//     //         for (int j = 0; j < cols; j++)
//     //         {
//     //             cin >> arr[i][j];
//     //         }
//     //     }
//     //     int key;
//     //     cin>>key;
//     //     cout<<findkey(arr,rows,cols,key)<<endl;

//     //  int arr[3][3];

//     // int rows = 3;
//     // int cols = 3;
//     // for (int i = 0; i < rows; i++)
//     // {
//     //     for (int j = 0; j < cols; j++)
//     //     {
//     //         cin >> arr[i][j];
//     //     }
//     // }
//     // cout << getmaxi(arr, rows, cols) << endl;
//     // int trans[3][3];
//     // print(arr, rows, cols);
//     // transpose(arr, rows, cols, trans);
//     // print(trans, rows, cols);

//     // // // VECTORS
//     // vector<vector<int>> arr;
//     // vector<int> a{1, 2, 3};
//     // vector<int> b{1, 2, 3};
//     // vector<int> c{1, 2, 3};
//     // arr.push_back(a);
//     // arr.push_back(b);
//     // arr.push_back(c);

//     // for (int i = 0; i < arr.size(); i++)
//     // {
//     //     for (int j = 0; j < arr[i].size(); j++)
//     //     {
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // int row = 3;
//     // int col = 5;
//     // vector<vector<int>> arr(row, vector<int>(col, 0));
//     // for (int i = 0; i < arr.size(); i++)
//     // {
//     //     for (int j = 0; j < arr[i].size(); j++)
//     //     {
//     //         cout << arr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     return 0;
// }
