//N QUEEN Problem optimtised approach
//using maps
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

unordered_map<int,bool>rowCheck;
unordered_map<int,bool>upperLeftDiagonalCheck;
unordered_map<int,bool>bottomLeftDiagonalCheck;
bool isSafe(int row,int col,vector<vector<char>>&board,int n)
{
    if(rowCheck[row]==true)
    {
        return false;
    }

    if(upperLeftDiagonalCheck[n-1+col-row]==true)
    {
        return false;
    }
    if(bottomLeftDiagonalCheck[row+col]==true)
    {
        return false;
    }
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
            rowCheck[row]=true;
            upperLeftDiagonalCheck[n-1+col-row]=true;
            bottomLeftDiagonalCheck[row+col]=true;
            //recursion solution laayega
            solve(board,col+1,n);
            //backtracking
            board[row][col]='-';//us queen ko hata do backtracking ke liye
            rowCheck[row]=false;
            upperLeftDiagonalCheck[n-1+col-row]=false;
            bottomLeftDiagonalCheck[row+col]=false;
        }
    }

}
int main()
{
    int n=9;
    vector<vector<char>>board(n,vector<char>(n,'-'));//n X n ka board banaya hai
    int col=0;
    solve(board,col,n);
return 0;
}