//LEETCODE 37
//SUDOKU SOLVER
class Solution {
public:
    bool isSafe(int row,int col,vector<vector<char>>&board,char value)
    {
        int n=board.size();  
        for(int i=0;i<9;i++) 
        {
            //row check
            if(board[row][i]==value)//left to right column tak check krenge
            return false;

            //col check
            if(board[i][col]==value)//top to bottom row tak check krenge
            return false;

            //3*3 box check
            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==value)
            return false;

        }
        return true;
    }
    bool solve(vector<vector<char>>& board)
    {
        int n=board.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                //check for empty cell
                if(board[i][j]=='.')
                {
                    //try to fill with values ranging from 1 to 9
                    for(char val='1';val<='9';val++)
                    {
                        //check for safety
                        if(isSafe(i,j,board,val))
                        {
                            //insert
                            board[i][j]=val;
                            bool aagekaSolution=solve(board);
                            if(aagekaSolution==true)
                            {
                                return true;
                            }
                            else
                            {   //backtrack
                                board[i][j]='.';
                            }
                        }
                    }
                    //if 1 se 9 tak koi bhi value se solution 
                    //nhi nikla current cell par that means 
                    //peeche kahi par galti hai
                    //go back by returning false
                    return false;
                }
            }
        }
        //all cells filled
        return true;
    }
    void solveSudoku(vector<vector<char>>& board)
    {
        solve(board);
    }
};