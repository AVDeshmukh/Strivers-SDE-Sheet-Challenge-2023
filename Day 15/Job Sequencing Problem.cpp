class Solution 
{
    public:
    static bool cmp(Job a, Job b)
    {
        if(a.profit > b.profit)
            return true;
        else
            return false;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
       sort(arr,arr+n,cmp);
       
       int mx=arr[0].dead;
       for(int i=1; i<n; i++)
       {
           mx=max(mx,arr[i].dead);
       }
       vector<int>v(mx+1,-1);
       
       int count=0, profit=0;
       for(int i=0; i<n; i++)
       {
           int j=arr[i].dead;
           while(j>0)
           {
               if(v[j]==-1)
               {
                   profit+=arr[i].profit;
                   count++;
                   v[j]=i;
                   break;
               }
               j--;
           }
       }
       return {count,profit};
    } 
};