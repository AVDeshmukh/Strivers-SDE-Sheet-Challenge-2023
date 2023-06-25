class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(Item a, Item b)
    {
        double r1 = (double) a.value / (double) a.weight;
        double r2 = (double) b.value / (double) b.weight;
        return r1 > r2;
    }
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        sort(arr,arr+n, cmp);
        
        double profit=0;
        for(int i=0; i<n; i++)
        {
            if((w-arr[i].weight)>=0)
            {
                
                w-=arr[i].weight;
                profit+=arr[i].value;
            }
            else
            {
                profit += (arr[i].value / (double) arr[i].weight) * (double) w;
                break;
            }
        }
        return profit;
    }
        
};