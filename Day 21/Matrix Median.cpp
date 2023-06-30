int fun(vector<int>v, int num)
{
    int n=v.size();
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]<=num)
            low=mid+1;
        else
            high=mid-1;
    }
    return low;
}
int getMedian(vector<vector<int>> &matrix)
{
    int m=matrix.size();
    int n=matrix[0].size();
    int low=0, high=1e5;
    int test=(m*n)/2;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int count=0;
        for(int i=0; i<m; i++)
        {
            count+=fun(matrix[i],mid);
        }
        if(count<=test)
            low=mid+1;
        else
            high=mid-1;
    }
    return low;
}