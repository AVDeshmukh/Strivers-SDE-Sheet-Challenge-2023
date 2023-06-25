class Solution
{
public:
    void fun(int i, int sum, vector<int>arr, vector<int>&ds )
    {
        if(i<0)
        {
            ds.push_back(sum);
            return;
        }
        fun(i-1,sum, arr,ds);
        fun(i-1,sum+arr[i],arr,ds);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ds;
        fun(N-1,0,arr,ds);
        return ds;
    }
};