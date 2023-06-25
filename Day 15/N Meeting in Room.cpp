class Solution
{
    public:
    static bool cmp(pair<int,int>a, pair<int, int>b)
    {
        if(a.second < b.second)
            return true;
        else
            return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>meet(n);
        for(int i=0; i<n; i++)
        {
            meet[i].first=start[i];
            meet[i].second=end[i];
        }
        sort(meet.begin(), meet.end(),cmp);
        
        int lim=meet[0].second;
        int count=1;
        for(int i=1; i<n; i++)
        {
            if(meet[i].first > lim)
            {
                lim=meet[i].second;
                count++;
            }
        }
        return count;
    }
};