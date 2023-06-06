class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        int row[m];
        int col[n];
        for(int i=0; i<m; i++)
            row[i]=1;
        for(int i=0; i<n; i++)
            col[i]=1;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                if(matrix[i][j]==0)
                {
                    col[j]=0;
                    row[i]=0;
                }
            }
        }
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                if(col[j]==0 || row[i]==0)
                    matrix[i][j]=0;
            }
        }

    }
};