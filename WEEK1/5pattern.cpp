#include<iostream>
using namespace std;
int main()
{
//PYRAMID
//    * 
//   * * 
//  * * * 
// * * * *
int n;
cin>>n;
for(int row=0;row<n;row++)
{
    for(int j=0;j<n-(row+1);j++)//for spaces 
    {
        cout<<" ";
    }
    for(int k=0;k<row+1;k++)//for stars
    {
        cout<<"* ";
    }
cout<<endl;
}
// }
//INVERETED PYRAMID
// * * * * * * 
//  * * * * *  
//   * * * * 
//    * * *
//     * *
//      *
// int n;
// cin>>n;
// for(int row=0;row<n;row++)
// {
//     for(int j=0;j<row;j++)//for spaces 
//     {
//         cout<<" ";
//     }
//     for(int k=0;k<n-row;k++)//for stars
//     {
//         cout<<"* ";
//     }
// cout<<endl;
// }


//SOLID DIAMOND 
//          * 
//         * * 
//        * * *
//       * * * * 
//      * * * * *
//     * * * * * *
//    * * * * * * * 
//   * * * * * * * *
//  * * * * * * * * * 
// * * * * * * * * * * 
// * * * * * * * * * * 
//  * * * * * * * * * 
//   * * * * * * * * 
//    * * * * * * *
//     * * * * * * 
//      * * * * *
//       * * * *
//        * * *
//         * *
//          *
// int n;
// cin>>n;
// for(int row=0;row<n;row++)
// {
//     for(int j=0;j<n-(row+1);j++)//for spaces 
//     {
//         cout<<" ";
//     }
//     for(int k=0;k<row+1;k++)//for stars
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int row=0;row<n;row++)
// {
//     for(int j=0;j<row;j++)//for spaces 
//     {
//         cout<<" ";
//     }
//     for(int k=0;k<n-row;k++)//for stars
//     {
//         cout<<"* ";
//     }
// cout<<endl;
// }


//          *
//         * *
//        *   *
//       *     *
//      *       *
//     *         *
//    *           *
//   *             *
//  *               *
// *                 *
// *                 *
//  *               *
//   *             *
//    *           *
//     *         *
//      *       *
//       *     *
//        *   *
//         * *
//          *
//HOLLOW DIAMOND
// int n;
// cin>>n;
// //first half part
// for(int row=0;row<n;row++)
// {
//     for(int i=0;i<n-(row+1);i+=1)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<2*row+1;j+=1)
//     {if(j==0||j==2*row)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// //other half part
// for(int row=0;row<n;row++)
// {

//     for(int col=0;col<row;col++)
//     {
//         cout<<" ";
//     }
//     for(int col=0;col<2*n-2*row-1;col++)
//     {if(col==0||col==2*n-2*row-1-1)
//         {
//             cout<<"*";
//         }
//     else{
//         cout<<" ";
//     }

//     }
// cout<<endl;

// }

// ********** **********
// *********   *********
// ********     ********
// *******       *******
// ******         ******
// ****             ****
// ***               ***
// **                 **
// *                   *
// *                   *
// **                 **
// ***               ***
// ****             ****
// ******         ******
// *******       *******
// ********     ********
// *********   *********
// ********** **********
//FLIPPED SOLID DIAMOND
// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {//half pyramid
// for(int i=0;i<n-row;i++)
// {
//     cout<<"*";
// }
// //space wala full pyramid
// for(int col=0;col<2*row+1;col++)
// {
//     cout<<" ";
// }
// //half pyramid
// for(int i=0;i<n-row;i++)
// {
//     cout<<"*";
// }
// cout<<endl;
// }
// for(int row=0;row<n;row+=1)
// {//half pyramid
// for(int i=0;i<row+1;i++)
// {
//     cout<<"*";
// }
// //space wala full pyramid
// for(int col=0;col<2*n-2*row-1;col++)
// {
//     cout<<" ";
// }
// //half pyramid
// for(int i=0;i<row+1;i++)
// {
//     cout<<"*";
// }
// cout<<endl;
// }
    

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// int n;
// cin>>n;
// for(int row=0;row<n;row++)
// {
//     for(int col=0;col<row+1;col++)
//     {
//         cout<<row+1;
//         if(col!=row)//not a last character
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int row=0;row<n;row++)
// {
//     for(int col=0;col<n-row;col++)
//     {
//         cout<<n-row;
//         if(col!=n-row-1)//not a last character
//         cout<<"*";
//     }
//     cout<<endl;
// }

// 1
// 12
// 123
// 1234
// 12345

// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {for(int col=0;col<row+1;col+=1)
//     {
//         cout<<col+1;
//     }
// cout<<endl;
// }

// 1
// 121
// 12321
// 1234321
// 123454321

// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {int col;
//     for(col=0;col<row+1;col+=1)
//     {
//         cout<<col+1;
//     }
//     col=col-1;
//     for(;col>=1;col--)
//     {
//         cout<<col;
//     }
// cout<<endl;
// }

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

// int n;
// cin>>n;
// for(int row=0;row<n;row+=1)
// {   int col;
//     for(col=0;col<row+1;col+=1)
//     {
//         int ans=col+1;
//         char ch=ans+'A'-1;
//         cout<<ch;
//     }
//     col=col-1;
//     for(;col>=1;col--)
//     {
//         int ans=col;
//         char ch=ans+'A'-1;
//         cout<<ch;
//     }
// cout<<endl;
// } 

//HOLLOW DIAMOND
//     *
//    * *
//   *   *
//  *     *
// *       *
// int n;
// cin>>n;
// //first half part
// for(int row=0;row<n;row++)
// {
//     for(int i=0;i<n-(row+1);i+=1)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<2*row+1;j+=1)
//     {if(j==0||j==2*row)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
return 0;
}