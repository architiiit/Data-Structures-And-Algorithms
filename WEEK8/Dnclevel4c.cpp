//Leetcode
//51 ->N-queen Problem
class Solution {
public:
    unordered_map<int,bool>rowCheck;
    unordered_map<int,bool>upperLeftDiagonalCheck;
    unordered_map<int,bool>bottomLeftDiagonalCheck;
    void storeSolution(vector<vector<char>>&board,int n,vector<vector<string>>&ans)
    {vector<string>temp;
    for(int i=0;i<n;i++)
    {string output="";
        for(int j=0;j<n;j++)
        {
            output.push_back(board[i][j]);
        }
        temp.push_back(output);
    }
    ans.push_back(temp);
    }
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

    void solve(vector<vector<char>>&board,int col,int n,vector<vector<string>>&ans)
    {
    //base case->jab ek solution mil gaya ho
    if(col>=n)
    {
        storeSolution(board,n,ans);
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
            solve(board,col+1,n,ans);
            //backtracking
            board[row][col]='.';//us queen ko hata do backtracking ke liye
            rowCheck[row]=false;
            upperLeftDiagonalCheck[n-1+col-row]=false;
            bottomLeftDiagonalCheck[row+col]=false;
        }
    }

    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>>ans;
    vector<vector<char>>board(n,vector<char>(n,'.'));//n X n ka board banaya hai
    int col=0;
    solve(board,col,n,ans);
    return ans;
    }
};