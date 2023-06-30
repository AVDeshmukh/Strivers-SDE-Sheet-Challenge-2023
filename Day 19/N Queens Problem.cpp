class Solution {
public:
    bool issafe(int row, int col,int n,vector<string>&board)
    {
        int r=row, c=col;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row--;
            col--;
        }
        row=r;
        col=c;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        row=r;
        col=c;
        while(col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        return true;
    }
    void fun(int col, int n, vector<string>&board, vector<vector<string>>&ans)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n; row++)
        {
            if(issafe(row,col,n,board))
            {
                board[row][col]='Q';
                fun(col+1, n, board, ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        string s="";
        for(int i=0; i<n; i++)
            s+=".";
        vector<string>board(n,s);
        fun(0,n,board,ans);
        return ans;
    }
};