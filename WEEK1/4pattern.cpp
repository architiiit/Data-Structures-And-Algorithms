#include <iostream>
using namespace std;

int main()
{ // 3 rows and 5 colums solid rectangle
  ////outer loop -row observe
  // for(int row=0;row<3;row+=1)
  // {//inner loop -column observe
  //     for(int col=0;col<5;col+=1)
  //     {
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  // } 

    // 4 cross 4 solid square
    //  int n;
    //  cin>>n;
    //  for(int row=0;row<n;row+=1)
    //      {
    //          for(int col=0;col<n;col+=1)
    //          {
    //              cout<<"* ";
    //          }
    //          cout<<endl;
    //      }

    // HOLLOW RECTANGLE
    // for (int row = 0; row < 3; row += 1)
    // {
    //     //first or last row print 5 stars
    //     if (row == 0 || row == 2)
    //     {
    //         for (int col = 0; col < 5; col += 1)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else{
    //         cout<<"* ";
    //         for(int i=0;i<3;i+=1)
    //         {
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // }
    // int r,c;
    // cin>>r>>c;
    // for (int row = 0; row < r; row += 1)
    // {
    //     //first or last row print 5 stars
    //     if (row == 0 || row == r-1)
    //     {
    //         for (int col = 0; col < c; col += 1)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else{
    //         cout<<"* ";
    //         for(int i=0;i<c-2;i+=1)
    //         {
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // }
//HALF PYRAMID
// *
// **
// ***
// ****
// *****
// int n;
// cout<<"enter the number of rows"<<endl;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {
//     for(int col=0;col<row+1;col++)
//         {
//             cout<<"*";
//         }
//     cout<<endl;
// }


//INVERTED HALF PYRAMID
// *****
// **** 
// ***  
// **
// *
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
//     {for(int col=0;col<n-row;col+=1)
//         {cout<<"* ";
//         }
//     cout<<endl;
//     }

//NUMERIC HALF PYRAMID
// 1
// 1 2
// 1 2 3
// 1 2 3 4 5
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
//     {for(int col=0;col<row+1;col+=1)
//         {
//             cout<<col+1;
//         }
//         cout<<endl;
//     }

//NUMERIC INVERTED HALF PYRAMID
// 12345
// 1234
// 123
// 12
// 1
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {   for(int col=0;col<n-row;col+=1)
//     {
//         cout<<col+1;
//     }
// cout<<endl;
// }

//pyramid
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *  
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {
//   for(int i=0;i<n-(row+1);i+=1)
//   {
//     cout<<" ";
//   }

//   for(int col=0;col<row+1;col+=1)
//   {
//     cout<<"* ";
//   }
// cout<<endl;
// }


//inverted pyramid
// * * * * * 
//  * * * *
//   * * *
//    * *
//     *
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {
//   for(int i=0;i<row;i+=1)
//   {
//     cout<<" ";
//   }

//   for(int col=0;col<n-row;col+=1)
//   {
//     cout<<"* ";
//   }
// cout<<endl;
// }


//NUMBERS PYTAMID

//         1 
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {
//   for(int i=0;i<n-(row+1);i+=1)
//   {
//     cout<<"  ";
//   }
//   int c=row;
//   for(int col=0;col<row+1;col+=1)
//   {
//     cout<<c+1<<" ";
//     c++;
//   }
//   for(int k=1;k<row+1;k+=1)
//   {
//     cout<<c-1<<" ";
//     c--;
//   }
// cout<<endl;
// }



//hollow pyramid   
//     * 
//    * *
//   *   *
//  *     *
// * * * * *
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {
//   for(int i=0;i<n-(row+1);i+=1)
//   {
//     cout<<" ";
//   }

//   for(int col=0;col<row+1;col+=1)
//   {if(row==n-1)
//     {
//       cout<<"* ";
//     }
//     else{
//     if(col==0||col==row)
//     {cout<<"* ";
//     }
//     else{ 
//       cout<<"  ";
//     }
//     }
//   }
// cout<<endl;
// }

// //hollow pyramid   
//          *
//         * *
//        *   *
//       *     *
//      *       *
//     *         *
//    *           *
//   *             *
//  *               *
// *******************
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {
//   for(int i=0;i<n-(row+1);i+=1)
//   {
//     cout<<" ";
//   }

//   for(int col=0;col<2*row+1;col+=1)
//   {if(row==n-1)
//     cout<<"*";
//     else
//     {
//     if(col==0||col==2*row)
//     {cout<<"*";
//     }
//     else{
//       cout<<" ";
//     }
//     }
//   }
// cout<<endl;
// }
return 0;
}