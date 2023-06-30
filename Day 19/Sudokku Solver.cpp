class Solution {
public:
    bool isval(int row, int col, char c, vector<vector<char>>& board)
    {
        for(int i=0; i<9; i++)
        {
            if(board[i][col]==c)
                return false;
            if(board[row][i]==c)
                return false;
            int ro=3*(row/3)+i/3;
            int co=3*(col/3)+i%3;
            if(board[ro][co]==c)
                return false;
        }
        return true;
    }
    bool fun(vector<vector<char>>& board)
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1'; c<='9'; c++)
                    {
                        if(isval(i,j,c,board))
                        {
                            board[i][j]=c;
                            if(fun(board)==true)
                                return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        fun(board);
    }
};