// optimal
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0, mid=0, r=nums.size()-1;
        while(mid<=r)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[l]);
                mid++;
                l++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[r]);
                r--;
            }
        }
        
    }
};

// Count 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0, one=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                zero++;
            else if(nums[i]==1)
                one++;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(i<zero)
                nums[i]=0;
            else if(i<(zero+one))
                nums[i]=1;
            else
                nums[i]=2;
        }
    }
};