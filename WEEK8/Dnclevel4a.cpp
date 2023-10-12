//N-queen problem

#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int row,int col,vector<vector<char>>&board,int n)
{
    //check krna chahte hai, 
    // ki kya main current cell [row,col] par, 
    //queen rakh sakta hun ya nahi

    //queens ko humlogb left to right place kar rhe hain to hame right side me check krne ki koimjarurat nhi hai
    //hame left me check krne ki jarurat hai ki koi queen left me placed hai ya nhi current queen ki area me

    int i=row;
    int j=col;
    
    //left me check krne ke 3 condition hai

    //1.check row
    while(j>=0)
    {
        if(board[i][j]=='Q')//queen already present hai
        {
            return false;
        }
        j--;
    }
    //2.check upper left diagonal
    //fir se set krna hoga kyonki upar waale loop ke baad change ho gya hoga value 
    i=row;
    j=col;
     while(i>=0 && j>=0)
     {
        if(board[i][j]=='Q')//queen already present hai
        {
            return false;
        }
        i--;
        j--;
     }

    //3.check bottom left diagonal
    i=row;
    j=col;
    while(i<n && j>=0)
    {
        if(board[i][j]=='Q')//queen already present hai
        {
            return false;
        }
        i++;
        j--;
    }
    //kahin par bhi queeen nhi mili
    //iska matlab ye position safe hai
    //true return kar do
    return true;
}
void printSolution(vector<vector<char>>&board,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

}
void solve(vector<vector<char>>&board,int col,int n)
{
    //base case->jab ek solution mil gaya ho
    if(col>=n)
    {
        printSolution(board,n);
        return;
    }

    //1 case solve krna hai baaki recursion sambhaal lega
    //har ek row me queen ko place krne ka try krna hai
    for(int row=0;row<n;row++)
    {
        if(isSafe(row,col,board,n))
        {
            //0->empty cell
            //1->Queen of the cell
            //rakh do
            board[row][col]='Q';//queen present hai iska matlab 1 hai
            //recursion solution laayega
            solve(board,col+1,n);
            //backtracking
            board[row][col]='-';//us queen ko hata do backtracking ke liye
        }
    }

}
int main()
{
    int n=2;
    vector<vector<char>>board(n,vector<char>(n,'-'));//n X n ka board banaya hai
    int col=0;
    solve(board,col,n);
return 0;
}