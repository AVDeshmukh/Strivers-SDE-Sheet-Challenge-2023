 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0], mx=0;
        for(int i=1; i<prices.size(); i++)
        {
            mx=max(mx,prices[i]-mn);
            mn=min(mn,prices[i]);
        }
        return mx;
    }
};