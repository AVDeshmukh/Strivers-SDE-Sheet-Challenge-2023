class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0, high=n-2;
        while(low <= high)
        {
            int mid=(low+high)/2;
            if(mid%2==0)
            {
                if(nums[mid+1]==nums[mid])  
                    low=mid+1;
                else
                    high=mid-1;
            }
            else
            {
                if(nums[mid-1]==nums[mid])  
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return nums[low];
    }
};