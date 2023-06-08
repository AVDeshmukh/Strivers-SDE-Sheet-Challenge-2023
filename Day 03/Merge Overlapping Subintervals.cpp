class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        vector<vector<int>>ans;
        for(int i=0; i<in.size(); i++)
        {
            if(ans.empty() || in[i][0] > ans.back()[1])
            {
                ans.push_back(in[i]);
            }
            else
            {
                ans.back()[1]=max(in[i][1], ans.back()[1]);
            }
        }
        return ans;
    }
};