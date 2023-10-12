#include <iostream>
using namespace std;
int main()
{
    //         1
    //       2 3 2
    //     3 4 5 4 3
    //   4 5 6 7 6 5 4
    // 5 6 7 8 9 8 7 6 5
    // int n;
    // cin>>n;
    // for(int row=0;row<n;row++)
    //     {for(int i=0;i<n-row-1;i++)
    //     {
    //         cout<<"  ";
    //     }
    //         //row+1 element print krna hai
    //         int start1=row+1;
    //         for(int col=0;col<row+1;col++)
    //             {
    //                 cout<<start1<<" ";
    //                 start1+=1;
    //             }
    //             int start2=2*row;
    //         for(int j=0;j<row;j++)
    //             {
    //                 cout<<start2<<" ";
    //                 start2--;
    //             }
    //         cout<<endl;
    //     }

    //     1
    //    1 2
    //   1   3
    //  1     4
    // 1 2 3 4 5
    // int n;
    // cin>>n;
    // for(int row=0;row<n;row+=1)
    // {for(int col=0;col<n-row-1;col+=1)
    //     {
    //         cout<<" ";
    //     }
    //     int start=1;
    //     for(int col=0;col<2*row+1;col+=1)
    //     {if(row==0||row==n-1)
    //         {if(col%2==0)
    //             {
    //                 cout<<start;
    //                 start++;
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     else{
    //         //first col
    //         if(col==0)
    //         {
    //             cout<<1;
    //         }
    //         else if(col==2*row)
    //         {
    //             cout<<row+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     }
    //     cout<<endl;
    // }

    // 3
    // 44
    // 555
    // 6666
    // 555
    // 44
    // 3
    // int n;
    // cin>>n;

    // for(int row=0;row<n;row++)
    // {
    //   for(int j=0;j<row+1;j++)
    //   {
    //     cout<<row+3;
    //   }
    //   cout<<endl;
    // }
    // for(int row=0;row<n-1;row++)
    // {for(int j=0;j<n-row-1;j++)
    //   {
    //     cout<<n+1-row;
    //   }

    // cout<<endl;
    // }

    // ******
    // *   *
    // *  *
    // * *
    // **
    // *
    // int n;
    // cin>>n;
    // for(int row=0;row<n;row++)
    // {
    // for(int col=0;col<n-row;col++)
    // {if(row==0)
    //   cout<<"*";
    //   else if(col==0||col==n-row-1)
    //   {
    //     cout<<"*";
    //   }
    //   else{
    //     cout<<" ";
    //   }

    // }
    // cout<<endl;
    // }
    //      *
    //     * *
    //    *   *
    //   *     *
    //  *       *
    // * * * * * *
    // int n;
    // cin>>n;
    // for(int row=0;row<n;row++)
    // {for(int col=0;col<n-row-1;col++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col++)
    //     {if(row==n-1)
    //     {
    //         cout<<"* ";
    //     }
    //     else if(col==0||col==row)
    //         {
    //             cout<<"* ";
    //         }
    //         else
    //         {
    //             cout<<"  ";
    //         }

    //     }
    //     cout<<endl;
    // }

    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * *
    // * * * * * * * * * *
    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {for(int j=0;j<i+1;j++)
    //     {
    //         cout<<"*";
    //     }
    // for(int j=0;j<2*n-2*i-2;j++)
    //     {
    //         cout<<" ";
    //     }
    // for(int j=0;j<i+1;j++)
    //     {
    //         cout<<"*";
    //     }
    // cout<<endl;
    // }
    // for(int i=0;i<n;i++)
    // {
    // for(int j=0;j<n-i;j++)
    // {
    //     cout<<"*";
    // }
    // for(int j=0;j<2*i;j++)
    // {
    //     cout<<" ";
    // }
    // for(int j=0;j<n-i;j++)
    // {
    //     cout<<"*";
    // }

    // cout<<endl;
    // }
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<i+1;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28
    // int n;
    // cin>>n;
    // int start=1;
    // for(int i=0;i<n;i++)
    // {for(int j=0;j<i+1;j++)
    //     {
    //         cout<<start<<" ";
    //         start++;
    //     }
    // cout<<endl;
    // }

    // 1 2 3 4 5
    // 2     5
    // 3   5
    // 4 5
    // 5
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {int a=i;
    //     for(int j=0;j<n-i;j++)
    //     {if(i==0)
    //         {cout<<a+1<<" ";
    //         a++;
    //         }
    //         else if(j==0||j==n-i-1)
    //         {
    //             cout<<a+1<<" ";
    //             a++;
    //         }
    //         else
    //         {
    //             cout<<"  ";
    //             a++;
    //         }

    //     }
    //     cout<<endl;
    // }

    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         cout<<"  ";
    //     }
    //     int start=1;
    //     for(int j=0;j<i+1;j++)
    //     {
    //         cout<<start<<" ";
    //         start++;
    //     }
    //     int start2=i;
    //     for(int j=0;j<i;j++)
    //     {
    //         cout<<start2<<" ";
    //         start2--;
    //     }
    //     cout<<endl;
    // }
    // ********1*********
    // *******2*2********
    // ******3*3*3*******
    // *****4*4*4*4******
    // ****5*5*5*5*5*****
    // int n;
    // cin>>n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n + 3 - i; j++)
    //             cout << "*";
    //         for (int k = 0; k < i+1; k++)
    //         {   if(k!=i)
    //             cout << i + 1<<"*";
    //             else
    //             cout<<i+1;
    //         }
    //         for (int j = 0; j < n + 3 - i; j++)
    //             cout << "*";
    //         cout << endl;
    //     }



// *
// *1*
// *121*
// *12321*
// *121*
// *1*
// *
// int n;
//     cin>>n;
   
//     for(int i=0;i<n;i++)
//     {int start=1;
//     int start2=i;
//         for(int j=0;j<i+1;j++)
//     { 
//         if(j==0)
//         {
//             cout<<"*";
//         }
//         else{
//             cout<<j;
//         }
//     }
//         for(int k=i;k>0;k--)
//         {
//             if(k==1)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<k-1;
//             }
//         }
//     cout<<endl;
//     }
// for(int i=0;i<n-1;i++)
// {
// for(int j=0;j<n-i-1;j++)
// {if(j==0)
// {
//     cout<<"*";
// }
// else{
//     cout<<j;
// }
// }
// for(int k=n-i-2;k>0;k--)
// {
//     if(k==1)
//     {
//         cout<<"*";
//     }
//     else{
//         cout<<k-1;
//     }
// }
// cout<<endl;

// }



// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1
//     int n;
//     cin >> n;
//     int start1 = 1;
//     int start2;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << start1;
//                 start1++;
//             }
//             else
//             {
//                 cout << "*";
//             }
//         }
//         if(i==n-1)
//         start2=start1-1-i;
//         cout << endl;

//     }
       
//    for(int i=0;i<n;i++)
//    {int c=0;
//         for(int j=0;j<2*n-2*i-1;j++)
//         {
//             if(j%2==0)
//             {
//                 cout<<start2;
//                 start2++;
//                 c++;
//             }
//             else{
//                 cout<<"*";
//                 c++;
//             }
//         }
        
//         start2=(start2-1)-(c-1);
//         cout<<endl;
//    }    



//PASCAL TRIANGLE
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1
// 1 4 6 4 1

// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
// int C=1;
// for(int j=1;j<=i;j++)
// {
//     cout<<C<<" ";
//     C=C*(i-j)/(j);
// }
// cout<<endl;
// }   

//FANCY PATTERN #1


// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
// ***6*6*6*6*6*6***

// //take values less than 9
// int n;
// cin>>n;

// for(int i=0;i<n;i++)
// {int start_num_index=8-i;
// int num=i+1;
// int count_num=num;
//     for(int j=0;j<17;j++)//only possible upto 9 lines
//     {
//         if(j==start_num_index && count_num>0)
//         {
//             cout<<num;
//             start_num_index+=2;
//             count_num--;
//         }
//         else{
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }


//FANCY PATTERN #2

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

// int n;
// cin>>n;

// int c=1;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<i+1;j++)
//     {
//         cout<<c;
//         c++;
//     if(j<i)
//     {
//         cout<<"*";
//     }
//     }
   
//     cout<<endl;
// }

// int start=c-n;
// for(int i=0;i<n;i++)
// {int k=start;
//     for(int j=0;j<n-i;j++)
//     {
//         cout<<k;
//         k++;
//         if(j<n-i-1)
//         {
//             cout<<"*";
//         }
//     }
//     start=start-(n-i-1);
//     cout<<endl;
// }









//FANCY PATTERN #3
// *
// *1*
// *121*
// *12321*
// *121*
// *1*
// *
// int n;
// cin>>n;

// for(int i=0;i<n;i++)
// {
//     int cond=i<=n/2 ? 2*i : 2*(n-i-1);
//     for (int j=0;j<=cond;j++)
//     {
//         if(j<=cond/2)
//         {
//             cout<<j+1;
//         }
//         else
//         {
//             cout<<cond-j+1;
//         }
//     }
//     cout<<endl;

// }




    return 0;
}
