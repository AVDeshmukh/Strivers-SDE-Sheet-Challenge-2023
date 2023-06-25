class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep, dep+n);
    	
    	int i=0,j=0, platfrom_needed=0, mx=0;
    	while(i<n && j<n)
    	{
    	    if(arr[i] <= dep[j])
    	    {
    	        platfrom_needed++;
    	        i++;
    	    }
    	    else
    	    {
    	        platfrom_needed--;
    	        j++;
    	    }
    	    mx=max(platfrom_needed,mx);
    	}
    	return mx;
    }
};