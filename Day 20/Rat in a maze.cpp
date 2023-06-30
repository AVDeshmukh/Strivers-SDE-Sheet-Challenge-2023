class Solution{
    public:
    void fun(int row, int col,string s, vector<vector<int>> &m, int n, vector<string>&ans,vector < vector < int >> &vis)
    {
        if(row==n-1 && col==n-1)
        {
            ans.push_back(s);
            return;
        }
        if(row+1 <n && m[row+1][col]==1 && !vis[row+1][col])
        {
            vis[row][col] = 1;
            s+="D";
            fun(row+1,col,s,m,n,ans,vis);
            s.pop_back();
            vis[row][col] = 0;
        }
            
        if(col+1<n && m[row][col+1]==1 && !vis[row][col+1])
        {
            vis[row][col] = 1;
            s+="R";
            fun(row,col+1,s,m,n,ans,vis);
            s.pop_back();
            vis[row][col] = 0;
        }
        if(row-1 >=0 && m[row-1][col]==1 && !vis[row-1][col])
        {
            vis[row][col] = 1;
            s+="U";
            fun(row-1,col,s,m,n,ans,vis);
            s.pop_back();
            vis[row][col] = 0;
        }
            
        if(col-1>=0 && m[row][col-1]==1 && !vis[row][col-1])
        {
            vis[row][col] = 1;
            s+="L";
            fun(row,col-1,s,m,n,ans,vis);
            s.pop_back();
            vis[row][col] = 0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        string s="";
        vector<string>ans;
        vector < vector < int >> vis(n, vector < int > (n, 0));
        if(m[0][0]==0)
            return ans;
        fun(0,0,s,m,n,ans,vis);
        return ans;
    }
};